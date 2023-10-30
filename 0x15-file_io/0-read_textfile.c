#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: the file to be read.
 * @letters: number of letters to be read and printed.
 *
 * Return: 0 if filename is NULL or write fails, otherwise the actual number.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	lenr = read(file_d, buffer, letters);
	lenw = write(STDOUT_FILENO, buffer, lenr);

	if (file_d == -1 || lenr == -1 || lenw == -1 || lenw != lenr)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_d);

	return (lenw);
}
