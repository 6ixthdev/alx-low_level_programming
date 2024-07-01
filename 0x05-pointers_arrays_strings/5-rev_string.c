#include "main.h"

/**
 * rev_string - reverse string
 * rev_string: reverse string
 * @s: argument taken by the function
 * Return: Always return 1 on success
 */


void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char tmp;

	while (s[index++])
	{
		len++;
	}
	for (index = len - 1; index / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
