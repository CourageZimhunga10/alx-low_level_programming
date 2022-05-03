#include "main.h"

/*Library for open system call man open*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*Library for close and write system call man close*/
#include <unistd.h>

/**
 * read_textfile - Function that reads a text file and prints it
 *
 * @filename: The pathname of file to read
 * @letters: number of letters it should read and print
 *
 * Description: A function that reads a text file and prints it to
 * the POSIX standard output.
 * Return: Number of letters it could read and print, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

