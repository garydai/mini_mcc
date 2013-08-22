#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
//C��22+10 = 32���ؼ���
#define token_type int

#define MAX_TOKEN_LEN 100

typedef enum
{
	//��ʾ��
	ID,
	//�ؼ���
	INT,
	FLOAT,
	IF,
	ELSE,
	//������
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