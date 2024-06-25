#include "main.h"

/**
 *_islower - funtion check to see if the character is a lowercase character
 *@c: the character to print
 *
 * Return: void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

