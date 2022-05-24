#include "_unsetenv.h"

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
