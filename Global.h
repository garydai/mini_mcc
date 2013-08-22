#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
//C有22+10 = 32个关键字
#define token_type int

#define MAX_TOKEN_LEN 100

typedef enum
{
	//标示符
	ID,
	//关键字
	INT,
	FLOAT,
	IF,
	ELSE,
	//操作符
	PLUS,		//+
	ASSIGN,		//=
	PLUS_EQUAL, //+=
	MINUS,      //-
	MINUS_EQUAL,//-
	EQUAL,		//==
	MUL,		//*
	MUL_EQUAL,	//*=
	DIV,	    ///
	DIV_EQUAL,	///=
}type;




#endif