#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints all possible combinations
 * of double-digit numbers from the ANSI character set.
 * Return: Always 0
 */
int main(void)
{
	int digit_one;
	int digit_two;

	digit_one = 47;

	while (digit_one < 57)
	{
		digit_one++;
		digit_two = 47;

		while (digit_two < 57)
		{
			digit_two++;

			if (digit_one == digit_two || digit_two <= digit_one)
				continue;

			putchar(digit_one);
			putchar(digit_two);

			if (digit_one == 56 && digit_two == 57)
				break;

			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
