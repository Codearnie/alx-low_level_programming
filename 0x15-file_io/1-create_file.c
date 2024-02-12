#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of file
 * @text_content: contents within file
 *
 * Return: 1 Success, else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int letters, fl, i;

	if (!filename)
		return (-1);
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);
	else if (!text_content)
		text_content = " ";

	for (letters = 0; text_content[letters]; letters++)
		;
	i = write(fl, text_content, letters);
	if (i == -1)
		return (-1);
	close(fl);

	return (1);
}
