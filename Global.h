#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
//C有22+10 = 32个关键字
#define token_type int

#define MAX_TOKEN_LEN 100

#define identifier 0x1000
#define kw_type    0x2000
#define kw_stm     0x4000
#define op		   0x8000
#define punct	   0x10000

typedef enum
{
	//标示符
	ID		   =0x1000, 

	//类型关键字keywords
	INT 	   =0x2000,
	FLOAT,

	//语句关键字
	IF		   =0x4000,
	ELSE,

	//操作符
	PLUS	   =0x8000,//+
	ASSIGN,		//=
	PLUS_EQUAL, //+=
	MINUS,      //-
	MINUS_EQUAL,//-
	EQUAL,		//==
	MUL,		//*
	MUL_EQUAL,	//*=
	DIV,	    ///
	DIV_EQUAL,	///=

	//标号
	LBRACE	    =0x10000,//{
	RBRACE,	 //}
	SEMICOLON,//;


};




#endif