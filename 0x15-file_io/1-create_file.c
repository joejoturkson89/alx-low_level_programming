#include "main.h"
/**
 * create_file - function that creates a file and adds permission.
 * @filename: name of file to be created
 * @text_content: content of created file
 * Return: return 1 if it runs / -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int ij, len = 0;
	long int wrt;

	if (filename == NULL)
		return (-1);

	ij = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (ij == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wrt = write(ij, text_content, len);
		if (wrt == -1)
			return (-1);
	}

	if (close(ij) == -1)
		return (-1);
	return (1);
}
