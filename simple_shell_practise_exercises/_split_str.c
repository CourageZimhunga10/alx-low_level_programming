#include <stdio.h>
#include <stdlib.h>

#include "_strtok.h"
#include "_setenv.h"
#include "_unsetenv.h"

int is_delimiter(char *str, char *delimiter, int index);

/**
 * _split_str - Function to split a string to array by a delimiter
 *
 * @str: String to split
 * @delimiter: String to use to split
 *
 * Return: string array of split string
 */
char **_split_str(char *str, char *delimiter)
{
	int str_i = 0, delimiters_count = 2, word_counter = 0, word_i = 0,
		word_len = 0, word_start_i = 0, delimiter_len = 0;

	static char **words;
	char *word;

	delimiter_len = _strlen(delimiter);

	/* Count the number of delimiters in str  */
	while (str[str_i])
	{
		if (is_delimiter(str, delimiter, str_i))
			delimiters_count = delimiters_count + delimiter_len;
			
		str_i++;
	}

	words = malloc(sizeof(char *) * delimiters_count);
	str_i = 0;

	while (1)
	{
		if (is_delimiter(str, delimiter, str_i) || str[str_i] == '\0')
		{
			if (word_len > 0)
			{
				word = malloc(sizeof(char) * word_len); /* Create word */
				word_i = 0;

				for (word_start_i = str_i - word_len; word_start_i < str_i; word_start_i++)
				{
					word[word_i] = str[word_start_i];
					word_i++;
				}

				words[word_counter] = word; /* Add word to words */
				word_counter++;
			}

			if (str[str_i] == '\0')
			{
				words[word_counter] = NULL;
				break;
			}

			word_len = 0;
			
			str_i = str_i + delimiter_len;
		}
		else
		{
			word_len++;
			str_i++;
		}
	}

	return (words);
}

/**
 * is_delimiter - Function to check if delimiter exist from current index
 * 
 * @str: String to check delimiter
 * @delimiter: Delimiter to check in string
 *
 * Return: 1 if delimiter not found, 0 Otherwise
 */
int is_delimiter(char *str, char *delimiter, int index)
{
	int is_delimiter = 1;
	int delimiter_index = 0;

	while(delimiter[delimiter_index])
	{
		if(delimiter[delimiter_index] != str[index])
		{
			is_delimiter = 0;
			break;
		}

		delimiter_index++;
		index++;
	}

	return (is_delimiter);
}
