#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * _strchr: locates a character in a string
 * @s: first argument
 * @c: second argument
 * Return: return null or the pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
