#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to print last digit
 *
 * Return: Last digit of @n
 */
int print_last_digit(int n)
{
	n %= 10;

	/* Make absolute */
	if (n < 0)
		n *= -1;

	_putchar('0' + n);

	return (n);
}
