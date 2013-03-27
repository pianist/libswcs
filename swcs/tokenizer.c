#include "tokenizer.h"
#include "charset.h"
#include <stdint.h>
#include <string.h>

#define TOKENIZER_STATE_BUFFER_SIZE 64

typedef struct __tokenizer_state_s
{
	void* user_data;
	swcs_next_token cb;
	uint32_t state;
	uint32_t buffered;
	swcs_token_t tokens[TOKENIZER_STATE_BUFFER_SIZE];
} __tokenizer_state_t;


static void simplify_rule_digits(__tokenizer_state_t* st)
{
	if (st->buffered < 3) return;

	uint32_t i = st->buffered - 2;
	swcs_token_t* tok = &st->tokens[i];

	if (tok->sz != 1) return;

	if ((tok->p[0] == '.') || (tok->p[0] == ','))
	{
		swcs_token_t* tok_prev = &st->tokens[i - 1];
		swcs_token_t* tok_next = &st->tokens[i + 1];
		if ((tok_prev->tpismennost == SW_WP_DIGIT) &&
		    (tok_next->tpismennost == SW_WP_DIGIT))
		{
			tok_prev->sz += 1 + tok_next->sz;
			tok_prev->letter_count += 1 + tok_next->letter_count;
			tok_prev->tpismennost |= SW_WP_COMPLEX;
			st->buffered -= 2;
		}
	}

	if ((tok->p[0] == ':') || (tok->p[0] == '/') || (tok->p[0] == '-'))
	{
		swcs_token_t* tok_prev = &st->tokens[i - 1];
		swcs_token_t* tok_next = &st->tokens[i + 1];
		if (((tok_prev->tpismennost & SW_WP_DIGIT)) &&
		    (tok_next->tpismennost == SW_WP_DIGIT))
		{
			tok_prev->sz += 1 + tok_next->sz;
			tok_prev->letter_count += 1 + tok_next->letter_count;
			tok_prev->tpismennost |= SW_WP_COMPLEX;
			st->buffered -= 2;
		}
	}
}

static void simplify_rule_percent(__tokenizer_state_t* st)
{
	if (st->buffered < 2) return;

	uint32_t i = st->buffered - 1;
	swcs_token_t* tok = &st->tokens[i];
	swcs_token_t* tok_prev = &st->tokens[i - 1];

	if (tok->sz != 1) return;

	if ((tok->p[0] == '%') && ((tok_prev->tpismennost & SW_WP_DIGIT) != 0))
	{
		tok_prev->sz += tok->sz;
		tok_prev->letter_count += tok->letter_count;
		tok_prev->tpismennost |= SW_WP_COMPLEX;
		tok_prev->tok_type = TOK_TYPE_PERCENT;
		st->buffered--;
	}
}

static void simplify_rule_minus(__tokenizer_state_t* st)
{
	if (st->buffered < 3) return;

	uint32_t i = st->buffered - 2;
	swcs_token_t* tok = &st->tokens[i];
	if ((tok->sz == 1) && ((tok->p[0] == '-') || (tok->p[0] == '\'')))
	{
		swcs_token_t* tok_prev = &st->tokens[i - 1];
		swcs_token_t* tok_next = &st->tokens[i + 1];
		if (tok_prev->tpismennost == tok_next->tpismennost)
		{
			tok_prev->sz += 1 + tok_next->sz;
			tok_prev->letter_count += 1+ tok_next->letter_count;
			tok_prev->tcase |= tok_next->tcase;
			st->buffered -= 2;
		}
	}
}

static void simplify_rule_hashtag(__tokenizer_state_t* st)
{
	if (st->buffered != 2) return;

	swcs_token_t* tok = &st->tokens[0];
	if (tok->p[0] == '#')
	{
		tok->tok_type = TOK_TYPE_HASHTAG;
		swcs_token_t* tok1 = &st->tokens[1];
		if (tok1->tpismennost == SW_WP_COMPLEX)
		{
			unsigned allowed = 0;
			while ((allowed < tok1->sz) && (strchr("-_.", tok1->p[allowed]))) allowed++;
			if (allowed)
			{
				tok1->p += allowed;
				tok1->sz -= allowed;
				tok->sz += allowed;
				tok->letter_count += allowed;
			}
			if (!tok1->sz)
			{
				st->buffered--;
			}
		}
		else
		{
			tok->sz += tok1->sz;
			tok->letter_count += tok1->letter_count;
			st->buffered--;
		}
	}
}

static void push_back_token(__tokenizer_state_t* st, const char* tok_start, unsigned sz, unsigned letter_count, uint32_t wpismennost, uint8_t wcase)
{
	if (st->buffered >= TOKENIZER_STATE_BUFFER_SIZE) return;
	swcs_token_t* tok = &st->tokens[st->buffered];
	tok->p = tok_start;
	tok->sz = sz;
	tok->letter_count = letter_count;
	tok->tpismennost = wpismennost;
	tok->tcase = wcase;
	switch (tok->tpismennost)
	{
		case SW_WP_DIGIT:
			tok->tok_type = TOK_TYPE_DIGITS;
		case SW_WP_COMPLEX:
			tok->tok_type = TOK_TYPE_PUNCTUATION;
		default:
			tok->tok_type = TOK_TYPE_WORD;
	}

	st->buffered++;

	simplify_rule_digits(st);
	simplify_rule_percent(st);
	simplify_rule_minus(st);
	simplify_rule_hashtag(st);
}

static void simplify_rule_cpp(__tokenizer_state_t* st)
{
	if (st->buffered < 2) return;

	swcs_token_t* tok0 = &st->tokens[0];
	swcs_token_t* tok1 = &st->tokens[1];

	if (tok0->sz != 1) return;
	if ((tok0->p[0] != 'C') && (tok0->p[0] != 'c')) return; 

	if (tok1->sz > 2) return;
	if ((tok1->sz == 1) && (tok1->p[0] != '#')) return;
	if ((tok1->sz == 2) && (tok1->p[0] != '+') && tok1->p[1] != '+') return;

	tok0->sz += tok1->sz;
	tok0->letter_count += tok1->letter_count;

	unsigned to_erase = 1;
	if (st->buffered > 2)
	{
		swcs_token_t* tok2 = &st->tokens[2];
		if (tok2->tpismennost == SW_WP_DIGIT)
		{
			to_erase++;
			tok0->sz += tok2->sz;
			tok0->letter_count += tok2->letter_count;

			if (st->buffered > 3)
			{
				swcs_token_t* tok3 = &st->tokens[3];
				if (tok3->tpismennost == SW_WP_LATIN)
				{
					to_erase++;
					tok0->sz += tok3->sz;
					tok0->letter_count += tok3->letter_count;
				}
			}
		}
	}

	unsigned i;
	for (i = 1; i < st->buffered - to_erase; ++i) st->tokens[i] = st->tokens[i + to_erase];

	st->buffered -= to_erase;
}

static void push_break(__tokenizer_state_t* st)
{
	if (!st->buffered)
	{
		st->state = 0;
		return;
	}

	simplify_rule_cpp(st);

	uint32_t i;
	for (i = 0; i < st->buffered; ++i)
	{
		st->cb(&st->tokens[i], st->user_data);
	}

	st->buffered = 0;
	st->state = 0;
}

void swcs_parse_text(const char* s, swcs_next_token cb, void* user_data)
{
	const char* tok_start = s;
	uint32_t cur_pismennost = 0;
	uint32_t cur_case = 0;
	__tokenizer_state_t st;
	memset(&st, 0, sizeof(__tokenizer_state_t));
	st.user_data = user_data;
	st.cb = cb;

	uint16_t prev_c = 0;
	unsigned letter_count = 0;

	while (*s)
	{
		unsigned sz;
		uint16_t c = swcs_get_char(s, &sz);

		const struct swcs_char_properties* props = swcs_get_char_properties(c);
		uint32_t cur_cpismennost = props->cpismennost;
		uint8_t cur_ccase = props->ccase;

		if (((cur_pismennost & cur_cpismennost) == 0) || (cur_cpismennost == SW_WP_COMPLEX && prev_c != c))
		{
			if (cur_pismennost)
			{
				push_back_token(&st, tok_start, s - tok_start, letter_count, cur_pismennost, cur_case);
			}
			else
			{
				push_break(&st);
			}

			tok_start = s;
			if (0 == cur_cpismennost) tok_start += sz;
			cur_pismennost = 0;
			cur_case = 0;
			letter_count = 0;
		}

		cur_pismennost |= cur_cpismennost;
		if (!cur_case && (SW_UI_UPPER == cur_ccase)) cur_case = SW_UI_FIRST;
		cur_case |= cur_ccase;

		s += sz;
		letter_count++;
		prev_c = c;
	}

	push_back_token(&st, tok_start, s - tok_start, letter_count, cur_pismennost, cur_case);

	push_break(&st);
}

