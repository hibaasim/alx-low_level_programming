#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: arguments array
 *
 * Return: sum for success, 1 if error
 */
int main(int argc, char **argv)
{
	int sum, i, j;

	if (argc < 3)
	{
		printf("Error \n");
		return (1);

	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		sum = i * j;
	}

	printf("%d\n", sum);
	return (0);
}
