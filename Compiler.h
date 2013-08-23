#ifndef COMPILER_H
#define COMPILER_H
#include "Lex.h"
#include "Decl.h"

class mcc
{
public:

	mcc(char* s)
	{
		lex = new Lex(s);
	}

	void parse();

	char get_Lex();

	char get_text();	

private:

	Lex* lex;
};
#endif
