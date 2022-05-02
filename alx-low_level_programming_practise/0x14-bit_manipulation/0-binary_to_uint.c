#include <stdio.h>

/**
 * _strlen - Gets length of passed string
 *
 * @s: Pointer to a String
 *
 * Return: The length of @s
 */
int _strlen(const char *s)
{
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}

	return (i);
}

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}

/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int
 * @b: string of 0 and 1 chars.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int power;
	int b_index;

	sum = 0;
	power = 0;
	b_index = _strlen(b) - 1; /* Minus 1 to get the last index */

	while(b_index > -1)/* Loop b string backwards */
	{
		char c;
		int step;

		c = *(b + b_index);

		if(c == '0')
			step = 0 * _pow_recursion(2, power);  /* Multiply */
		else
			step = 1 * _pow_recursion(2, power);
		
		sum += step;
		
		printf("b_index: %d, step: %d, power: %d\n", b_index, step, power);

		power++;
		b_index--;
	}
	
	return (sum);
}
