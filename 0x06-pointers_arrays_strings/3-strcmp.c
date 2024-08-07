#include "main.h"

/**
 * _strcmp - compares pointer of two strings
 * _strcmp: compares pointer of two strongs
 * @s1: first string
 * @s2: second string
 * Return: returns the value of s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
