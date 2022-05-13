#ifndef GETENV_H
	#define GETENV_H
	#include <stdio.h>

	char *_getenv(char *name);
	char **str_to_arr(char *str, char *delimiter);
	int _strcomp(char *str1, char *str2);
	void *_memcpy(void *dest, const void *src, int n);
	char *_strcpy(char *dest, char *src);
#endif
