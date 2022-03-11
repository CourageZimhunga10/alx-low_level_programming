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
	int digit_one, digit_two, digit_three;

	digit_one = 47;
	while (digit_one < 57)
	{
		digit_one++;
		digit_two = 47;

		while (digit_two < 57)
		{
			digit_two++;
			digit_three = 47;

			while (digit_three < 57)
			{
				digit_three++;

				if (digit_one == digit_two || digit_one == digit_three ||
					digit_two == digit_three || digit_two <= digit_one ||
					digit_three <= digit_two)
					continue;

				putchar(digit_one);
				putchar(digit_two);
				putchar(digit_three);

				if (digit_one == 55 && digit_two == 56 && digit_three == 57)
					break;

				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
