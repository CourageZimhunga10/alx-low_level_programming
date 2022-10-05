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
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		// printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);	
}
