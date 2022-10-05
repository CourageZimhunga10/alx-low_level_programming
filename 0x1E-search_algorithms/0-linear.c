#include <stdio.h>
#include "search.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 *	using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array
 * @size:  is the number of elements in @array
 * @value: value to search for
 *
 * Return: the first index where value is located. otherwise -1
 */
/*
 * Pseudocode
 * 1. Loop each item in array
 * 2.	If item is same as value, return value and end loop
 */
int linear_search(
		__attribute__ ((unused))int *array,
		__attribute__ ((unused))size_t size,
		__attribute__ ((unused))int value)
{
	size_t i;

	/* Check aganist undefined array */
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
