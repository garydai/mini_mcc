#ifndef LEX_H
#define LEX_H

#include "Global.h"

class Lex
{
public:
	Lex(char* t);

	int GetToken();

	void SetText(char* t);

	char* text;

	char current_token[MAX_TOKEN_LEN];
};

#endif