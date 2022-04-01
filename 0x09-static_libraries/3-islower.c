#include "main.h"

/**
 * _islower - checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return:  1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int r = 0;

	if (c >= 'a' && c <= 'z')
		r = 1;

	return  (r);
}
