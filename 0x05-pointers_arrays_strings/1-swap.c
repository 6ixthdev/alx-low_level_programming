#include "main.h"

/**
 * swap_int - swap the values of two integers
 * swap_int: swap the values of two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: Always returns 1 on success
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
