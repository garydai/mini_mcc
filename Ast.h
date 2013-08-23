#ifndef AST_H
#define AST_H
#include "Global.h"
class ast_node
{
public:
	//节点类型
	int kind;
	//下一个节点
	ast_node* next;

};


//声明节点
class ast_declaration_node : public ast_node
{
public:
	ast_declaration_node()
	{
		para = 0;
	}
	int type;
	char name[MAX_TOKEN_LEN];
	//如果是有参数的函数
	ast_declaration_node* para;

};




#endif