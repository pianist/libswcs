#ifndef __SWCS_TOKENIZER_H__ERTVERTVERT__
#define __SWCS_TOKENIZER_H__ERTVERTVERT__
#include "charset.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TOK_TYPE_EMPTY        0
#define TOK_TYPE_WORD         1
#define TOK_TYPE_PUNCTUATION  2
#define TOK_TYPE_DIGITS       3
#define TOK_TYPE_HASHTAG      4
#define TOK_TYPE_PERCENT      5


typedef struct swcs_token_s
{
    const char* p;
    unsigned sz;
    unsigned letter_count;
    uint32_t tpismennost;
    uint8_t tcase;
    uint8_t tok_type;
} swcs_token_t;

typedef int (*swcs_next_token)(const swcs_token_t* tok, void* data);


void swcs_parse_text(const char* s, swcs_next_token cb, void* user_data);


#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif // __SWCS_TOKENIZER_H__ERTVERTVERT__

