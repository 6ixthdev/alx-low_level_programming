#include "main.h"

/**
 * _memset - Entry point
 * _memset: Fills memory with a constant byte
 * @s: pointed destination
 * @b: the byte to use to fill
 * @n: the size
 * Return: returns the pointer
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
