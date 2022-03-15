#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number to check sign.
 *
 * Return:  1 if the number is greater than zero,
 *			0 if zero,
 *			-1 if less than zero.
 */
int print_sign(int n)
{
	int r;

	r = 0;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}

	return (r);
}
