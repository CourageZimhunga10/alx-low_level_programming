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
	/* Declarations */
	ssize_t file_descriptor, read_bytes, written_bytes;
	char *str;

	/* Dynamic allocation for string to be written*/
	str = malloc(sizeof(char) * letters);

	/*Check to avoid avoid segmentation fault*/
	if (!str)
		return (0);

	if (filename == NULL)
		return (0);

	/* Open file in read only using the oflag O_RDONLY */
	file_descriptor = open(filename, O_RDONLY);

	/* Read the file*/
	read_bytes = read(file_descriptor, str, letters);

	/* Output to standard output*/
	written_bytes = write(STDOUT_FILENO, str, letters);
	if (read_bytes == -1 || written_bytes == -1 || file_descriptor == -1)
		return (0);

	if (read_bytes != written_bytes)
		return (0);

	/* Close file descriptor */
	close(file_descriptor);

	/* Free memory to avoid memory leak */
	free(str);

	return (written_bytes);
}
