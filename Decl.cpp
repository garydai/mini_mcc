#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "Decl.h"

ast_declaration_node* decl_parser::ParseExternalDeclaration(Lex* lex)
{
	ast_declaration_node* node = new ast_declaration_node;
	int type = lex->get_token();
	if(type & kw_type)
	{
		node->type = type;
	}
	type = lex->get_token();
	if(type & identifier)
	{
		memcpy(node->name, lex->get_token_string(), strlen(lex->get_token_string()));
	}

	return node;

}