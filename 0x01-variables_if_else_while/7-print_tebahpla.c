#include <stdio.h>
/**
 * main - Program that prints the lowercase alphabet in reverse.
 *
 * Description: program that prints the alphabet in lowercase,
 * followed by a new line in reverse. Prints alphabets from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
	int ansi_number = '{';

	while (ansi_number-- > 'a')
		putchar(ansi_number);

	putchar('\n');
	return (0);
}
