#include "Compiler.h"

int main()
{

	char* s = "int a = 1";
	mcc cpilr(s);
	cpilr.parse();
	//printf("%d\n", cpilr.GetToken());
}