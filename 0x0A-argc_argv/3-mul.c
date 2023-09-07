#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts arguments
 * @argv: names arguments
 *
 * Return: 1
 */
int main(int argc, char **argv)
{
	int res;

	if (argc > 2)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf ("%d\n", res);
	}
	else
		printf("Error\n");
	return (1);
}
