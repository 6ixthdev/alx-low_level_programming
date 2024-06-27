#include "main.h"

/**
 * _isdigit - checks for a digit
 * _isdigit: check for a digit
 * @c: Argument it takes in
 *
 * Return: returns 1 on success and 0 on fail
 *
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
