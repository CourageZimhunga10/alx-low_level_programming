#include <stdio.h>
#include <stdlib.h>

#include "_unsetenv.h"

/**
 * _arr_len - a function to get size of array
 *
 * @arr: Array to get size
 *
 * Return: size of @arr, -1 otherwise
 */
int _arr_size(char **arr)
{
	int index = 0;

	while(arr[index])
		index++;

	return (index);
}
