#include "main.h"

/**
 * _puts - prints a bunch of characters
 * _puts: prints a bunch of characters
 * @str: argument it takes in
 * Return: Always 1 on success
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
