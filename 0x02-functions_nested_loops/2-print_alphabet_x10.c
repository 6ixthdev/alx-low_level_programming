#include "main.h"

/**
 * print_alphabet_x10 - funtion prints out the alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	char i;

	int a;

	for (a = 1; a <= 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

