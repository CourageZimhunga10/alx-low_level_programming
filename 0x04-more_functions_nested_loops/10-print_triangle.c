#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 *
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i = 0, j;

	while (i < size)
	{
		/* Print spaces */
		for (j = (size - i); j > 1; j--)
			_putchar(' ');

		for (j = 0; j <= i; j++)
			_putchar('#');

		/* Do not print last \n */
		if (++i < size)
			_putchar('\n');
	}

	_putchar('\n');
}
