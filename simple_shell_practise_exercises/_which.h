#ifndef WHICH_H
	#define WHICH_H

	#include <stdio.h>

	void _puts(char *str);
	int _putchar(char c);
	char *_getenv(const char *name);
	int _strcmp(char *s1, const char *s2);
	char **str_to_arr(char *str, char *delimiter);
	char *_strconcat(char *str1, char *str2);
	int _strlen(char *s);
#endif
