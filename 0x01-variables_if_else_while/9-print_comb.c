#include <stdio.h>
/**
*main - Entry point.
*main: Prints either is positive, negative or zero.
*Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
