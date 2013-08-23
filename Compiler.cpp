#include "Compiler.h"

void mcc::parse()
{
	while(*lex->get_char() != 0)
	{
		decl_parser::ParseExternalDeclaration(lex);
		int type = lex->get_token();
	}
}


