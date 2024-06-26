#include "main.h"

/**
 * print_to_98 - prints till 98
 * print_to_98: prints till 98
 *@n: Value to print
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 10)
			{
				_putchar('0' + n);
			}
			else if (n < 100)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n < 100)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
