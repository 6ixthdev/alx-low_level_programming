#include "main.h"

/**
 *times_table - prints the times table
 *@void: returns no value
 *
 * Return: void
 */

void times_table(void)
{
	int sum;
	int i;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			sum = i * a;

			if (sum >= 10)
			{
				_putchar('0' + (sum / 10));
			}
			_putchar('0' + (sum % 10));

			if (a < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (sum < 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

