#include "main.h"

/**
 *_isalpha - check to see if the character is a lowercase or upper character
 *@c: the character to print
 *
 * Return: void
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

