#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * _sqrt_recursion: natural square root of a number
 * @n: first argument
 * Return: the square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate the natural square numbers
 * _sqrt: calculates the natural square numbers
 * @n: first argument
 * @i: second argument
 * Return: the natural square root
 *
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
