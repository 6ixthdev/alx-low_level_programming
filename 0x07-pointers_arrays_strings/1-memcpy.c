#include "main.h"

/**
 * _memcpy - Entry point
 * _memcpy: copies a memory area
 * @dest: argument 1
 * @src: argument 2
 * @n: argument 3
 * Return: returns the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
