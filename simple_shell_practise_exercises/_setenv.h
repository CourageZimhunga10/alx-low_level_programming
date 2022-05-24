#ifndef SETENV_H
	#define SETENV_H

	extern char **environ;

	int _setenv(char *name, char *value, int overwrite);
	char **_split_str(char *str, char *delimiter);
	int _strlen(char *s);
	int _strcomp(char *str1, char *str2);
	char *_strconcat(char *str1, char *str2);
#endif