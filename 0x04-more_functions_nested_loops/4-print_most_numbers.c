#include "main.h"

/**
 *print_most_numbers - functions print numbers but skips 2 and 4
 *print_most_numbers: function prints numbers but skips 2 and 4
 *
 * Return: returns 1 on success
 */


void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
