#ifndef AST_H
#define AST_H

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
	
};




#endif