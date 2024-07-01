#include "main.h"

/**
 * _strlen - returns the length of a string
 * _strlen: returns the length of a string
 *
 * @s: arguments it takes
 *
 * Return: returns the length of the string
 *
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}
