#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int i, c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(49);
			_putchar((i%10) + 48);
		}
		_putchar('\n');
	}
}
