#include "main.h"

/**
 * _isdigit is a function that checks for a digit
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 * @c is integer
 */

int _isdigit(int c)
{
	int num;
	int isdigit = 0;

for (num = 0; num <= 9; num++)
{
if (c == num)
{
isdigit = 1;
break;
}
}
return (isdigit);
}
