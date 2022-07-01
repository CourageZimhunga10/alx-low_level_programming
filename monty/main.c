/* Need to use getline */
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>

/* man stdlib.h for EXIT_FAILURE*/
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#include "monty.h"
/**
 * main - program entry point
 *
 * @argc: number of arguments passed to the program
 * @argv: pointer to an array of char pointers to arguments
 *
 * Return: (EXIT_SUCCESS) on success (EXIT_FAILURE) on error
 */
int main(int argc, __attribute__ ((unused)) char **argv)
{
	FILE *monty_bytecode = NULL;
	char *filename = argv[1];
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	char *token;

	int base;
	char *endptr;
	long val;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	/* Open file */
	monty_bytecode = fopen(argv[1], "r");

	if (monty_bytecode == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	/* Read line in file*/
	while ((nread = getline(&line, &len, monty_bytecode)) != -1)
	{
		__attribute__ ((unused)) char *opcode = "";
		__attribute__ ((unused)) int parameter;

		token = strtok(line, " ");

		while (token != NULL)
		{
			if (opcode[0] == '\0')
			{
				opcode = token;
			}
			else
			{
				/* Look for parameter*/
				/* Convert string to int */
				base = atoi(token);

				errno = 0;    /* To distinguish success/failure after call */
				val = strtol(token, &endptr, base);

				/* Check for various possible errors. */
				if (errno != 0 || endptr == token) {
				} else {
					parameter = val;
				}
			}

			printf("%s\n", token);
			/*printf("%s\n", opcode);*/

			token = strtok(NULL, " ");
		}

		
		printf("opcode: %s, parameter: %d\n", opcode, parameter);
	}

	return (0);
}
