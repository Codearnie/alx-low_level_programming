#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: files name
 * @text_content: content within file
 *
 * Return: 1 Success(exists), else -1 on failure or doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fyl, lettrs, tem;

	if (!filename)
		return (-1);
	fyl = open(filename, O_WRONLY | O_APPEND);
	if (fyl == -1)
		return (-1);
	if (text_content)
	{
		for (lettrs = 0; text_content[lettrs]; lettrs++)
			;
		tem = write(fyl, text_content, lettrs);
		if (tem == -1)
			return (-1);
	}
	close(fyl);
	return (1);
}
