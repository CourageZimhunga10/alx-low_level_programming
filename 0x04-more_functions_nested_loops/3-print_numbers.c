#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);

	_putchar('\n');
}
