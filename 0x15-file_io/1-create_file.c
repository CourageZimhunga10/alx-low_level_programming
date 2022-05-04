#include "main.h"
/**
 * _strlen - Gets length of passed string
 *
 * @s: Pointer to a String
 *
 * Return: The length of @s
 */
size_t _strlen(char *s)
{
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		i++;
		c = s[i];
	}

	return (i);
}

/**
 * create_file - Function that creates a file
 *
 * @filename: The pathname of file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	/* Open file*/
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
	0600);

	if (file_descriptor == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	/* write to file */
	written_bytes = write(file_descriptor, text_content, _strlen(text_content));

	if (written_bytes == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
