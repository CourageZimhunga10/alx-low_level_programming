#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Code entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last_digit = n % 10;
	
	if (s > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	else if (s == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, s);
	}
	else if (s < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}


	return (0);
}
