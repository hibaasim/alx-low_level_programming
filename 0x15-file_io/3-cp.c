#include "main.h"

void _close(int file);

/**
 * _close - closes files
 * @file: file to be closed
 *
 */
void  _close(int file)
{
	int ret;

	ret = close(file);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int from = 0, to = 0;
	char *buf;
	ssize_t rea, wri;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		free(buf);
		return (-1);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to argv[2]\n");
		exit(99);
	}
	while ((rea = read(from, buf, 1024)) > 0)
	{
		wri = write(to, buf, rea);
		if (wri != rea)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to argv[2]\n");
			exit(99);
		}
	}
	if (rea == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	free(buf);
	_close(from);
	_close(to);
	return (0);
}
