#include "main.h"
/**
 * create_file - function that creates a file and adds permission.
 * @filename: name of file to be created
 * @text_content: content of created file
 * Return: return 1 if it runs / -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fild = 0, chx = 0, n = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fild = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fild > 0)
		return (-1);

	while (text_content[n])
		n++;
	chx = write(fild, text_content, n);
		if (chx < 0)
			return (-1);

				close(fild);
				return (1);
}
