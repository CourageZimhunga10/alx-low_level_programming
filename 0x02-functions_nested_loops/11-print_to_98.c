#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from @n to 98
 *
 * @n: Start of natural number
 */
void print_to_98(int n)
{
	if (n > 99)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}

	printf("%d\n", n);
}
