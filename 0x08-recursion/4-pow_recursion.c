#include "main.h"

/**
 * _pow_recursion - value of x raise to power y
 * _pow_recursion: value of x raise to power y
 * @x: first argument
 * @y: second argument
 * Return: value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));


}
