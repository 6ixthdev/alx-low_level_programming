#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point.
*main: Prints either is positive, negative or zero.
*Return: Always 0 (success)
*/
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than %d\n", n, last_digit, 5);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is %d\n", n, last_digit, 0);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than", n, last_digit);
printf(" %d and not %d\n", 6, 0);
}
return (0);
}
