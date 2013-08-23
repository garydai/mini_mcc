#ifndef AST_H
#define AST_H
#include "Global.h"
class ast_node
{
public:
	//�ڵ�����
	int kind;
	//��һ���ڵ�
	ast_node* next;

};


//�����ڵ�
class ast_declaration_node : public ast_node
{
public:
	ast_declaration_node()
	{
		para = 0;
	}
	int type;
	char name[MAX_TOKEN_LEN];
	//������в����ĺ���
	ast_declaration_node* para;

};




#endif