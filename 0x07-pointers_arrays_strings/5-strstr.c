#include <stdio.h>
#include "main.h"

/**
 * _strstr -  Entry point
 * _strstr: locate substring
 * @haystack: first argument
 * @needle: second argument
 * Return: returns either null or haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
