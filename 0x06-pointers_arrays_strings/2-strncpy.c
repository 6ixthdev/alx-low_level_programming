#include "main.h"

/**
 * _strncpy - function copies a string
 *
 * _strncpy: function copies a stringg
 *
 * @dest: first argument
 *
 * @src: second argument
 *
 * @n: third argument
 *
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
	{
		src_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
