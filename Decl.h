#ifndef DECL_H
#define DECL_H

#include "Ast.h"
#include "Lex.h"

class decl_parser
{
public:
	static ast_declaration_node* ParseExternalDeclaration(Lex* lex);
};

#endif