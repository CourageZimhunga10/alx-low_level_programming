#include <stdio.h>
#include "_getenv.h"

/**
 * _strcomp - check if two strings are the same.
 *
 * @str1: First string
 * @str2: Second string
 *
 * Return: 1 if strings match, 0 otherwise 
 */
int _strcomp(char *str1, char *str2)
{
	if(str1 == NULL || str2 == NULL)
		return (0);

	while(*str1 && *str2)
	{
		if(*str1 != *str2)
			return (0);
		str1++;
		str2++;
	}

	return (1);
}
