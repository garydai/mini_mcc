
#include "Lex.h"
token_type Lex::GetToken()
{
	//ÂÔ¹ý¿Õ¸ñ
	while(*(text) == ' ')
	{
		text ++;
	}

	token_type type = -1;
	switch (*text)
	{
	case 'i':
		{
			if((text + 1)!= 0 && (text + 2)!= 0)
			{
				if(*(text + 1) == 'n' && *(text + 2) == 't')
				{
					type = INT;
					break;
				}
			}
			type = ID;
			break;
		}
	case '=':
		{
			if((text + 1) != 0 && *(text + 1) == '=')
			{
				type = ASSIGN;
			}
			else
			{
				type = EQUAL;
			}
			break;
		}
	case '+':
		{
			if((text + 1) != 0 && *(text + 1) == '=')
			{
				type = PLUS_EQUAL;
			}
			else
			{
				type = PLUS;
			}
			break;
		}
	case '-':
		{
			if((text + 1) != 0 && *(text + 1) == '=')
			{
				type = MINUS_EQUAL;
			}
			else
			{
				type = MINUS;
			}
			break;
		}
	case '*':
		{
			if((text + 1) != 0 && *(text + 1) == '=')
			{
				type = MUL_EQUAL;
			}
			else
			{
				type = MUL;
			}
			break;
		}
	case '/':
		{
			if((text + 1) != 0 && *(text + 1) == '=')
			{
				type = DIV_EQUAL;
			}
			else
			{
				type = DIV;
			}
			break;
		}
	}

	//value
	int i = 0;
	while(*text != ' ' && *text != 0)
	{
		current_token[i++] = *text;
		text ++;
	}
	current_token[i] = 0;
	
	return type;
}

Lex::Lex(char* t)
{
	text = t;
}

void Lex::SetText(char* t)
{
	text = t;
}

