/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _which.c _puts.c _putchar.c _getenv.c _strcmp.c str_to_arr.c _strcpy.c _strcomp.c _strconcat.c _strlen.c -o _which && ./_which ls echo export */
#include "_which.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int output_filepath(char* filename);

/**
 * main - entry point
 *
 * @ac: Number of passed arguments
 * @av: Double pointer of arguments passed into program, NULL terminated.
 *
 * Return: 0 Always
 */
int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av)
{
	/* Loop arguments skip the first*/
	while(*++av)
		output_filepath(*av);

	return (0);
}

/**
 * output_filepath - Function to output filepath of file
 *
 * @filename: file to output its filepath
 *
 * Return: 1 on success, 0 otherwise 
 */
int output_filepath(__attribute__((unused)) char* filename)
{
	/* Get paths from PATH environment variable */
	char *path_value = _getenv("PATH");
	__attribute__((unused)) char **paths = NULL;
	int i = 0;
	struct stat st;
	char *filepath;

/* 	puts(path_value); */

	if(path_value == NULL)
		return (0);

	paths = str_to_arr(path_value, ":");

	/* Loop paths and check if filename exist */
	while(paths[i] != NULL)
	{
		filepath = _strconcat(paths[i], "/");
		filepath = _strconcat(filepath, filename);
		
        if (stat(filepath, &st) == 0)
            _puts(filepath);
			
		i++;
	}

	return (1);
}