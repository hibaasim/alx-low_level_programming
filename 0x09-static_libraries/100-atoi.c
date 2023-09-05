#include "main.h"

/**
 * _atoi - prints only numbers in string
 * @s: string to be checked
 *
 * Return: numbers or 0
 */
int _atoi(char *s)
{
	int res = 0, i, sn;

	for (i = 0; s[i]; i++)
	{
		sn = 1;
		if (s[i] == '-')
			sn = -1;

		else if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + (s[i] - '0');
		else
			break;
		return (sn * s[i]);
	}
	return (0);
}
