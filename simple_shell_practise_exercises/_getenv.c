#include <string.h>
#include <stdlib.h>

#include "_getenv.h"

/**
 * _getenv - Function to get environment variable value
 *
 * @key - name of environment varible
 *
 * Return: String value of environment variable, Otherwise NULL
 */
char *_getenv(__attribute__((unused)) char *key)
{
	__attribute__((unused)) extern char **environ;
	__attribute__((unused)) char *value = NULL;
	char *tmp;

	__attribute__((unused)) int i = 0;
	__attribute__((unused)) char* token;
	__attribute__((unused)) char* delimiter = "=";

	i=0;
	while(environ[i])
	{
		int j = 0;
		char **env;
		
		/* Get length of varaible string */
		while(environ[i][++j]);

		tmp = (char*) malloc(sizeof(char) * (j+1));

		/* Split env to key and value, pass a copy of string instead of actual string */
		env = str_to_arr(_strcpy(tmp, environ[i]), "=");

		if(_strcomp(env[0], key))
		{
			value = env[1];
			/* free(tmp); */
			break;
		}

		i++;
		/* free(tmp); */
	}
	
	return (value);
}
