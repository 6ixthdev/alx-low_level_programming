#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 * more_numbers: print 0 to 14 10 times
 *
 * Return: returns 1 on success
 */


void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar('0' + a / 10);
			}
			_putchar('0' + a % 10);
		}
		_putchar('\n');
	}
}
