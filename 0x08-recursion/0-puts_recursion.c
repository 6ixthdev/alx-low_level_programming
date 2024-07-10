#include "main.h"

/**
 * _puts_recursion - prints a string
 * _puts_recursion: prints a string
 * @s: only argument
 * Return: Always 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
