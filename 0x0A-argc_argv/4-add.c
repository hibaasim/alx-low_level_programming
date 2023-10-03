#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: count
 * @argv: arguments array
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc < 2)
		printf("0 \n");
	else
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' ||  argv[i][j] > '9')
				{
					printf("Error \n");
					return (1);
				}
				else
				{
					sum += atoi(argv[i]);
				}
			}
		}
		printf("%d \n", sum);
	}
	return (0);
}
