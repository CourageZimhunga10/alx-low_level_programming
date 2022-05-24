/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _setenv_main.c _setenv.c _split_str.c _strlen.c _strcomp.c _strconcat.c -o _setenv && ./_setenv */

#include <stdio.h>
#include "_setenv.h"

/**
 * main - Program entry point
 * 
 * Return: 0 always
 */
int main(void)
{	
	printf("%d\n", _setenv("ABC", "123", 1));

	return (0);
}