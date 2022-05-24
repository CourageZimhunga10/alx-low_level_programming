#include <stdio.h>
#include <stdlib.h>

#include "_unsetenv.h"

/**
 * _unsetenv.c - a function that deletes the variable name from the environment
 *
 * @name: Variable to delete from environment
 * 
 * Return: 1 on success. 0 otherwise
 */
int _unsetenv(char *name)
{
	extern char **environ;
	char **environ_new;
	int env_index = 0, index = 0, environ_len = 0, environ_new_index = 0;

	/* Does key exist */
	env_index = _env_exist(environ, name);
	printf("env_index: %d\n", env_index);

	if(env_index == -1)
		return (0);

	environ_len = _arr_size(environ);
	environ_new = malloc(sizeof(char *) * (environ_len  + 1));

	/* Loop assign environ to environ_new skipping index env_index */
	while(environ[index])
	{
		printf("%s\n", environ[index]);

		if(index == env_index){
			index++;
			continue;
		}
		environ_new[environ_new_index] = environ[index];
		index++;
		environ_new_index++;
	}

	puts("\n\n");

	/* Overwrite environ */
	index = 0;
	while(environ_new[index])
	{
		printf("%s\n", environ_new[index]);
		index++;
	}

	environ_new[index + 1] = NULL;

	environ = environ_new;

	return (0);
}
