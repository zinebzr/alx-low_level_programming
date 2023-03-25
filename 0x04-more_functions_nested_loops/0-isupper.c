#include "main.h"

/**
 * _isupper is a function that checks for uppercase character.
 *  Returns 1 if c is uppercase
 *  Returns 0 otherwise
 *  @c integer
 */

int _isupper(int c)
{
	char ch;
	int isupper = 0;
	
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	if (c == ch)
	{
		isupper = 1;
		break;
	}
	}
	return(isupper);
}
