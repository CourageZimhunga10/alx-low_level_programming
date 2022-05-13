#include <stdio.h>
#include <stdlib.h>

#include "_which.h"

/**
 * _strconcat - Join two strings.
 *
 * @str1: First string
 * @str2: Second string
 *
 * Return: Joined string
 */
char *_strconcat(char *str1, char *str2)
{
	char *joined_str = NULL;
	int index = 0;

	joined_str = malloc(sizeof(char) * (_strlen(str1) + _strlen(str2)));

	if(str1 == NULL || str2 == NULL || joined_str == NULL)
		return (joined_str);

	/* Add str1 to joined string */
	while(*str1)
	{
		joined_str[index] = *str1;
		str1++;
		index++;
	}
	/* Add str2 to joined string */
	while(*str2)
	{
		joined_str[index] = *str2;
		str2++;
		index++;
	}

	return (joined_str);
}
