#include "main.h"

/**
 * puts2 - prints every other cahracter
 * puts: prints every other character
 * @str:  argument used by the funtion
 * Return: Always 1 on success
 *
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
