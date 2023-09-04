#include "main.h"
/**
 * read_textfile - function that reads text file and
 * prints to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 * Return: return number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int id;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	id = open(filename, O_RDONLY);
	if (id == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(id);
		return (0);
	}

	lenr = read(id, buffer, letters);
	close(id);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);

	if (lenr != lenw)
		return (0);
	return (lenw);
}
