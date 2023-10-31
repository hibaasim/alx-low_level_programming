#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to file
 * @letters: number of letters
 *
 * Return: 0/w (no. og bytes) or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t op, wr, r;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	r = read(op, s, letters);
	wr = write(STDOUT_FILENO, s, r);
	if (r == -1 || op == -1 || wr == -1 || wr != r)
	{
		free(s);
		return (0);
	}
	free(s);
	close(op);
	return (wr);
}

