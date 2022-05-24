#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i = 'a';

		while (i < '{')
			_putchar(i++);

		_putchar('\n');
	}
}
