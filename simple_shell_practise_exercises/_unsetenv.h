#ifndef UNSETENV_H
	#define UNSETENV_H

	int _unsetenv(char *name);
	char **_split_str(char *str, char *delimiter);
	int _strlen(char *s);
	int _strcomp(char *str1, char *str2);
	int _arr_size(char **arr);
	int _env_exist(char **envs, char *key);
#endif