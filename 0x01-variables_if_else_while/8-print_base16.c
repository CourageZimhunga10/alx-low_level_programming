#include <stdio.h>
/**
 * main - Program that prints all the numbers of base 16
 *
 * Description: Program that prints  all the numbers of base 16
 * in lowercase. Prints from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
	int ansi_number;

	ansi_number = 48;

	while (ansi_number < 58)
	{
		putchar(ansi_number);
		ansi_number++;
	}

	ansi_number = 97;

	while (ansi_number < 103)
	{
		putchar(ansi_number);
		ansi_number++;
	}

	putchar('\n');
	return (0);
}
