#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * print_array: prints array
 * @a: first argument
 * @n: second argument
 * Return: always 1 on success
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
