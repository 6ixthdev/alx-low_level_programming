#include "main.h"

/**
 * print_line - the function prints lines
 * print_line: the function prints lines
 * @n: argument that determines how many to be printed
 *
 * Return: Always 1 on success
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
