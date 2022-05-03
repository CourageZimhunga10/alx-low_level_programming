#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int
 * @b: string of 0 and 1 chars.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	while(*b)
	{
		if (*b != 48 && *b != 49 && b == NULL)
			return 0;
			
		decimal = (decimal * 2) + (*b - 48);
		b++;
	}

	return(decimal);
}
