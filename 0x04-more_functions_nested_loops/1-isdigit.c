#include "main.h"

/**
 * _isdigit is a function that checks for a digit.
 * @c: integer
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
