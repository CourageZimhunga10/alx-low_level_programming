#include <stdio.h>
/**
 * main - Program that prints all possible combinations
 *
 * Description: Program that prints all possible combinations
 * of single-digit numbers from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);

		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');
	return (0);
}
