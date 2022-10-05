#ifndef SEARCH_ALGOS_HEADER
#define SEARCH_ALGOS_HEADER
/* Include guard to prevent multi inclusion error using #ifndef preprocessor */

/* Libraries */
	/* Library for size_t ssize_t */
	#include <stdlib.h>

/* Functions prototypes */
	int linear_search(int *array, size_t size, int value);
	int binary_search(int *array, size_t size, int value);
#endif
