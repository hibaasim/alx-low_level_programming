#include <stdio.h>

/**
 * main - Counts the number of arguments
 * @argc: count
 * @argv: arguments array
 *
 * Return: number of arguments
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
