#include "_which.h"
#include "_strtok.h"

/**
 * _strlen - Gets length of a string
 *
 * @str: Pointer to a String
 *
 * Return: The length of @str
 */
int _strlen(char *str)
{
	int i = 0;
	/* Prefix increment i while checking if */
	/* default pointer does not point to \0 */
	while (str[++i])
		;
	return (i);
}