#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to print last digit
 *
 * Return: Last digit of @n
 */
int print_last_digit(int n)
{
	int last_digit = _abs(n % 10);

	_putchar('0' + last_digit);

	return (last_digit);
}
