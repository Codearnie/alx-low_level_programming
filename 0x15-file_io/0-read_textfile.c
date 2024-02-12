#include "main.h"
/**
 * read_textfile - reads a text file and prints it out to POSIX std output
 * @filename: file name to read from
 * @letters: numb of letters to read and print out
 *
 * Return: numb of letters to output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t read_len, write_len;
	char *buf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(f);
		return (0);
	}
	read_len = read(f, buf, letters);
	close(f);

	if (read_len == -1)
	{
		free(buf);
		return (0);
	}
	write_len = write(STDOUT_FILENO, buf, read_len);
	free(buf);

	if (read_len != write_len)
		return (0);
	return (write_len);
}
