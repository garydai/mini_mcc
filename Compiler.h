#ifndef COMPILER_H
#define COMPILER_H
#include "Lex.h"

class mcc
{
public:

	mcc(char* s):lex(s)
	{

	}

	void parse();

	Lex lex;
};
#endif
