#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: ptr to file
 * @text_content: string to be added
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, op, wr;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
