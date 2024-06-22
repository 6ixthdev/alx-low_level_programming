#include <stdio.h>
/**
*main - Entry point.
*main: Prints either is positive, negative or zero.
*Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i <= 15; i++)
{
if (i < 10)
{
putchar('0' + i);
}
else
{
putchar('a' + (i - 10));
}
}
putchar('\n');
return (0);
}
