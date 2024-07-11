#include "main.h"

/**
 * factorial - returns the factorial of a number
 * factorial: returbs the factorial of a number
 * @n: argument to be received
 * Return: returns the result of the recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
