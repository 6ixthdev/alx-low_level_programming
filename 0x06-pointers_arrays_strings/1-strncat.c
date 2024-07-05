#include "main.h"

/**
 * _strncat - concatenates two string using at most
 *
 * _strncat: concatenates two strings using at most
 *
 * @dest: the first argument
 *
 * @src: the second argument
 *
 * @n: the third argument
 *
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
