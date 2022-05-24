/* gcc -Wall -pedantic -Werror _strtok_main.c  _strtok.c _strlen.c -o _strtok && ./_strtok */
#include <stdio.h>
#include <stdlib.h>

#include "_strtok.h"

/**
 * main - entry point
 *
 * 
 * Return: 0 Always
 */
int main(void)
{
	char *str = "Hello*&world*&my*";
	char **words = _split_str(str, "*");

	while (*words)
	{
		printf("\nWord 0: %s \n", *words);
		words++;
	}

	return (0);
}
