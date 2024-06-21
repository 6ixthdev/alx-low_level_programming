#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point.
*main: Prints either is positive, negative or zero.
*Return: Always 0 (success)
*/
int main(void)
{
int a;
int letter;
/* your code goes there */
for (a = 1; a <= 2; a++)
{
for (letter = 97; letter <= 122; letter++)
{
if (a == 2)
{
putchar(toupper(letter));
}
else
{
putchar(letter);
}
}
}
putchar('\n');
return (0);
}
