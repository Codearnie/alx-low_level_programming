#include "main.h"
/**
 * main - copies file contents from one file to another
 * @argc: argument count
 * @argv: no of arguments sent
 *
 * Return: 1 Success, else exit on failure
 */
int main(int argc, char *argv[])
{
	int desti, frm, bytes_r, bytes_wr, close_frm, close_desti;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[1024];

	bytes_r = 1024;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from frile_to\n");
		exit(97);
	}
	frm = open(argv[1], O_RDONLY);
	check_IO(frm, -1, argv[1], 'O');
	desti = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO(desti, -1, argv[2], 'W');

	while (bytes_r == 1024)
	{
		bytes_r = read(frm, buf, sizeof(buf));

		if (bytes_r == -1)
			check_IO(-1, -1, argv[1], 'O');
		bytes_wr = write(desti, buf, bytes_r);

		if (bytes_wr == -1)
			check_IO(-1, -1, argv[2], 'W');
	}
	close_frm = close(frm);
	check_IO(close_frm, frm, NULL, 'C');
	close_desti = close(desti);
	check_IO(close_desti, desti, NULL, 'C');
	return (0);
}
/**
 * check_IO - checks whether file can be opened or closed
 * @dest_desc: file descriptor to file to be opened
 * @filename: files name
 * @mode: closed or opened
 * @f_desc: file descriptor
 *
 * Return: void
 */
void check_IO(int dest_desc, int f_desc, char *filename, char mode)
{
	if (mode == 'C' && dest_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_desc);
		exit(100);
	}
	else if (mode == 'O' && dest_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && dest_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
