#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i = 'a';

        while (i <= 'z')
        {
                putchar(i);
		putchar(toupper(i));
                i++;
        }
        putchar ('\n');
        return (0);
}
