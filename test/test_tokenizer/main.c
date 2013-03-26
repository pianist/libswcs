#include <swcs/tokenizer.h>
#include <stdio.h>


int my_token_cb(const swcs_token_t* tok, void* data)
{
	printf("new token: type = %u\n", tok->tok_type);
	printf("\t%.*s (%u letters, case 0x%01X)\n", (unsigned)tok->sz, tok->p, tok->letter_count, tok->tcase);
	return 0;
}

int main(int argc, char** argv)
{
	while (!feof(stdin))
	{
		char buf[4096];
		if (fgets(buf, 4096, stdin))
		{
			swcs_parse_text(buf, my_token_cb, 0);
		}
	}

	return 0;
}

