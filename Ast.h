#ifndef AST_H
#define AST_H

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
	
};




#endif