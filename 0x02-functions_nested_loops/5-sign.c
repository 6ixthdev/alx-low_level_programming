#include "main.h"

/**
 *print_sign - print on sign based on result
 *@n: the character to print
 *
 * Return: void
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

