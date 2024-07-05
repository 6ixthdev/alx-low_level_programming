#include "main.h"

/**
 * string_toupper - chanegs all lowercase to uppercase
 * string_toupper: changes all lowercase to uppercase
 * @str: the argument taken by the function
 * Return: returns the resulting string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while(str[index])
	{
		if ( str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
			index++;
		}
	}
	return (str);
}
