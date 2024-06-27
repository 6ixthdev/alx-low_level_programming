#include "main.h"

/**
 * _isupper - checks uppercase characters for a lowercase character
 * _isupper: check uppercase characters for a lowercase character
 * @c: Argument it takes in
 *
 * Return: returns 1 on success and 0 on fail
 *
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
