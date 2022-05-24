/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _unsetenv_main.c _unsetenv.c _split_str.c _strlen.c _strcomp.c _arr_size.c _env_exist.c -o _unsetenv && ./_unsetenv */ 

#include <stdio.h>
#include "_unsetenv.h"

/**
 * main - Program entry point
 *
 * Return: 0 always
 */
int main(void)
{	
	printf("%d\n", _unsetenv("SHELL"));

	return (0);
}
