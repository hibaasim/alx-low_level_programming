#include "main.h"

/**
 * create_file - creates file
 * @filename: ptr to file
 * @text_content: ptr to new string
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, op, wr;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);
	if (wr == -1 || op == -1)
		return (-1);
	close(op);
	return (1);
}
