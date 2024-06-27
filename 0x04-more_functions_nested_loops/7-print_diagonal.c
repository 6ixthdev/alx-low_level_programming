#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * print_diagonal: prints diagonal lines
 * @n: receives the number of lines to be printed
 *
 * Return: Always return 1 on success
 */


void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (a = 0; a < i; a++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
