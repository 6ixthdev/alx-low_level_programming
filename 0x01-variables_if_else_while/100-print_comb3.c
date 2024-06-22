#include <stdio.h>
/**
*main - Entry point.
*main: Prints either is positive, negative or zero.
*Return: Always 0 (success)
*/
int main(void)
{
int i, a;
for (i = 0; i < 10; i++)
{
for (a = i + 1; a <= 9; a++)
{
putchar('0' + i);
putchar('0' + a);
if (i == 8 && a == 9)
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
