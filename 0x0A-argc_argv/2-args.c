#include <stdio.h>

/**
 * main - prints all args
 * @argc: count
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
