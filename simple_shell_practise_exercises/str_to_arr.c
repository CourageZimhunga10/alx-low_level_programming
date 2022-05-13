
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "_getenv.h"

/**
 * str_to_arr -Split string to array of strings
 *
 * @str: String to split
 * @delimiter: sub string to split string
 *
 * Return: string array
 */
char **str_to_arr(char *str, char *delimiter)
{
	char *token;

	/* TODO get size of tokens first */
	char **arr = malloc(1000 * sizeof(char *));
	int i = 0;

	token = strtok(str, delimiter);

	while (token != NULL)
	{
		arr[i] = token;
		/* printf("%d. %s\n", index, token); */
		token = strtok(NULL, delimiter);
		i++;
	}
	arr[++i] = NULL;

	/* TODO free memory */
	return arr;
}
