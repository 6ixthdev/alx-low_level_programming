#include "main.h"

/**
 *print_last_digit - prints the lst digit of a number
 *@num: the character to print
 *
 * Return: void
 */

int print_last_digit(int num)
{
	int digit;

	digit = num % 10;
	_putchar('0' + digit);
	return (digit);
}

