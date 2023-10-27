#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: number
 * @index: index of bit
 *
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n >> index) % 2 == 0)
		return (0);
	else
		return (1);
}
