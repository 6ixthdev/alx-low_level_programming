#include "main.h"

/**
 * _print_rev_recursion - prints reverse string
 * _print_rev_recursion: prints reverse string
 * @s: first argument
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
