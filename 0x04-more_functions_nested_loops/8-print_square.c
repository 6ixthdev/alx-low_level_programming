#include "main.h"

/**
 * print_square - prints square lines
 * print_square: prints square lines
 * @n: receives the number of lines to be printed
 *
 * Return: Always return 1 on success
 */


void print_square(int n)
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
			_putchar(35);
		}
		_putchar('\n');
	}
}
