#include "main.h"

/**
 * _strcpy - copies a string
 * _strcpy: copies a string
 * @dest: first argument
 * @src: second argument
 * Return: return 1 on success
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
