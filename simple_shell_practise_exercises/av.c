/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 av.c -o av && ./av one two NULL*/
#include <stdio.h>

int main (__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{	
	/* Check if default main pointer value is not NULL */
	while(*argv)
		printf("%s\n", *argv++); /* Postfix decrement, return initial value before increment */

/* 	int i = 0;
	  
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	} */

	return (0);
}
