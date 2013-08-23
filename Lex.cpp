
#include "Lex.h"
token_type Lex::get_token()
{
	//ÂÔ¹ý¿Õ¸ñ
	while(*(cur_char) == ' ')
	{
		cur_char ++;
	}

	token_type type = -1;
	switch (*cur_char)
	{
	case 'i':
		{
			if((cur_char + 1)!= 0 && (cur_char + 2)!= 0)
			{
				if(*(cur_char + 1) == 'n' && *(cur_char + 2) == 't')
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
			if((cur_char + 1) != 0 && *(cur_char + 1) == '=')
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
			if((cur_char + 1) != 0 && *(cur_char + 1) == '=')
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
			if((cur_char + 1) != 0 && *(cur_char + 1) == '=')
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
			if((cur_char + 1) != 0 && *(cur_char + 1) == '=')
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
			if((cur_char + 1) != 0 && *(cur_char + 1) == '=')
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
	while(*cur_char != ' ' && *cur_char != 0)
	{
		cur_token[i++] = *cur_char;
		cur_char ++;
	}
	cur_token[i] = 0;
	
	return type;
}

char* Lex::get_token_string()
{
	return cur_token;
}

char* Lex::get_char()
{
	return cur_char;
}


