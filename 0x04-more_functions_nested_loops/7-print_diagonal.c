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

	for (i = n; i > 0; i--)
	{
		for (a = i; a <= n; a++)
		{
			if (a == n)
			{
				_putchar(92);
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
