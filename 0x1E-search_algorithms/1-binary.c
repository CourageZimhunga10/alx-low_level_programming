#include <stdio.h>
#include "search.h"

/**
 * binary_search - a function that searches for a value in an array of integers
 *	using the Binary search algorithm iterative approach.
 *
 * @array: a pointer to the first element of the array
 * @size:  is the number of elements in @array
 * @value: value to search for
 *
 * Return: the first index where value is located. otherwise -1
 */
/*
 * Pseudocode
 * 2. SET low to lowest index
 * 3. SET high to highest index
 * 4. SET mid to (low + high)/2
 * 5. Loop each item in array
 * 5.	IF mid value equals search value
 * 6.		return mid
 * 7.   ELSE IF mid value is less search value
 * 8.		SET low to INCREMENT of mid
 * 9.	ELSE if mid value is more search value
 * 10.		SET high to DECREEMNT of mid
 */
int binary_search(
		__attribute__ ((unused))int *array,
		__attribute__ ((unused))size_t size,
		__attribute__ ((unused))int value)
{
	size_t i, low_i, high_i, mid_i;

	/* Check aganist undefined array */
	if (array == NULL)
		return (-1);

	low_i = 0;
	high_i = size - 1;

	for (i = 0; i < size; i++)
	{
		size_t j;

		mid_i = (low_i + high_i) / 2;

		printf("Searching in array: ");

		for (j = low_i; j < high_i + 1; j++)
		{
			printf("%ld", j);
			if (j != high_i)
				printf(", ");
		}

		printf("\n");

		if (array[mid_i] == value)
			return (mid_i);
		else if (array[mid_i] < value)
			low_i = mid_i + 1;
		else if (array[mid_i] > value)
			high_i = mid_i - 1;

		if (mid_i == size - 1)
			break;
	}

	return (-1);
}
