#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Code entry point
 *
 * Description: Program will assign a random number to the variable
 * n each time it is executed.
 * Return: Always 0
 */
int main(void)
{
int num;
int last_digit;

srand(time(0));
num = rand() - RAND_MAX / 2;

last_digit = num % 10;

if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",
num, last_digit);
}
if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", num, last_digit);
}
if (last_digit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",
num, last_digit);
}

return (0);
}
