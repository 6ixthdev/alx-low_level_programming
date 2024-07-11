#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * _strlen_recursion:  prints the length of a string
 * @s: first argument
 * Return:  the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
