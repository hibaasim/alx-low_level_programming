#include <stdio.h>

/**
 * main -Entry point
 * @argc: counts arguments
 * @argv: shows arguments
 *
 * Return: Always 0(Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
