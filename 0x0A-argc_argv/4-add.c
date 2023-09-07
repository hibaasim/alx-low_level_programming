#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: names of arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int t, i, res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]))
		{
			t = atoi(argv[i]);
			res += t;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
