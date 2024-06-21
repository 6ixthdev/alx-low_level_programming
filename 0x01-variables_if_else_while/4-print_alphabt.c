#include <stdio.h>
/**
*main - Entry point.
*main: Prints either is positive, negative or zero.
*Return: Always 0 (success)
*/
int main(void)
{
int letter;
/* your code goes there */
for (letter = 97; letter <= 122; letter++)
{
if (letter == 113 || letter == 101)
{
continue;
}
putchar(letter);
}
putchar('\n');
return (0);
}
