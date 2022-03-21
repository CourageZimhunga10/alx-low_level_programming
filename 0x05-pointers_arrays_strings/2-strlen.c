#include <stdio.h>

/**
 * _strlen - Gets length of passed string
 *
 * @s: Pointer to a String
 */
int _strlen(char *s)
{
	int i = 0;
	char c;

	while(c != '\0'){
		c = s[i];
		printf("%c", c);
		i++;
	}

	return (i-1);
}
