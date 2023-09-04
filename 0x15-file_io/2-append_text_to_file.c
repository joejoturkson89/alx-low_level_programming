#include "main.h"
/**
 * append_text_to_file - function that adds text at EOF
 * @filename: name of file to append data to
 * @text_content: data to be appended to file
 * Return: return 1 if it runs / -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fild = 0, chk = 0, j = 0;

	if (!filename)
		return (-1);

	fild = open(filename, O_RDWR | O_APPEND);
	if (fild < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;

		chk = write(fild, text_content, j);
		if (chk < 0)
			return (-1);
	}

	close(fild);
	return (1);
}
