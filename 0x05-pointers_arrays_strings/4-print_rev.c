#include "main.h"

/**
 * print_rev - reverse a string
 * print_rev: reverse a string
 * @s: argument used by function
 * Return: Always 1 on success
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
