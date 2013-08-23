#include "Compiler.h"
//#include <Windows.h>
//#include <iostream>
int main()
{

	char* s = "int a = 1";
	
	mcc cpilr(s);
	cpilr.parse();

/*
	char* t = NULL;
	char* a = new char[100];
	int tt = 0;
	__try
	{
		//a[122] = 21;
		int c = 100 / tt;
	}
	__except(EXCEPTION_EXECUTE_HANDLER)
	{
		printf("except\n");
		while(1);
	}
	printf("%d\n", a[122]);
			while(1);
			*/
}