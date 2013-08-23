#ifndef LEX_H
#define LEX_H

#include "Global.h"

class Lex
{
public:
	Lex(char* t)
	{
		text	 = t;
		cur_char = t;
	}

	int get_token();

	void SetText(char* t);

	char* get_token_string();

	char* get_char();

private:

	char* text;

	char* cur_char;

	char cur_token[MAX_TOKEN_LEN];

};

#endif