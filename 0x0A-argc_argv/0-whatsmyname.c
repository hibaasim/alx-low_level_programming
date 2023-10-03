#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * argc: count
 * argv: arguments array
 *
 * Return: program name
 */
int main(int argc, char *argv[])
{
	if( argc > 0)
	{
		printf("%s\n", *argv);
	}
	exit (0);
}
