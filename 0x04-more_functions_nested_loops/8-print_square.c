#include "main.h"

/**
 * print_square - prints square lines
 * print_square: prints square lines
 * @size: receives the number of square to be printed
 *
 * Return: Always return 1 on success
 */


void print_square(int size)
{
	int i;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
