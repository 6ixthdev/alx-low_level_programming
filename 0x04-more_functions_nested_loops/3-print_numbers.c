#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * print_numbers: prints numbers from 0 to 9
 *
 * Return: returns 1 success
 */


void print_numbers(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
