#include <stdio.h>
#include <stdlib.h>

#include "_setenv.h"

int _env_exist(char **envs, __attribute__((unused)) char *key);
int _arr_len(char **envs);

/**
 * _setenv - a function that changes or adds an environment variable
 * 
 * @name: Variable key name
 * @value: Variable value
 * @overwrite: 1 replace valuie of key, 0 do not replace
 * 
 * Return: index of key added or updated, -1 otherwise
 */
int _setenv(char *name, char *value, int overwrite)
{
	char **environ_new;
	char *env = _strconcat(_strconcat(name, "="), value);
	int index = 0, environ_len = 0;

	if(name == NULL || value == NULL || overwrite != 1)
		return (-1);

	environ_len = _arr_len(environ);

	/* IF env exist in envs, update value */
	index = _env_exist(environ, name);

	if(index > -1)
		environ[index] = env;
	/* ELSE create new_envs, copy envs to it, add env then set envs to new_envs */
	else
	{
		environ_new = malloc(sizeof(char *) * (environ_len + 2));
		
		for (index = 0; index < environ_len; index++)
			environ_new[index] = environ[index];
		
		/* Add new env */
		environ_new[environ_len] = env;
		environ_new[environ_len + 1] = NULL;

		/* Overwrite environ  */
		environ = environ_new;
	}

	return (-1);
}

/**
 * _env_exist - Function to check if key exist in environ
 *
 * @name: Variable key
 * @value: Variable value
 *
 * Return: index of key, -1 otherwise
 */
int _env_exist(char **envs, char *key)
{
	int index = 0;
	char **env;

	/* Loop each env check if key exist */
		/* If exist return env index */
	while(envs[index])
	{
		/* Split env to key and value */
		env = _split_str(envs[index], "=");

		/* Check if key exist */
		if(_strcomp(env[0], key))
			return index;

		index++;
	}

	return(-1);
}

int _arr_len(char **envs)
{
	int index = 0;

	while(envs[index])
		index++;

	return (index);
}