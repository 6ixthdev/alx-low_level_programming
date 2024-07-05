#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * reverse_array: reverses an array
 *
 * @a: first argument
 *
 * @n: second argument
 *
 * Return: always 1 on success
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
