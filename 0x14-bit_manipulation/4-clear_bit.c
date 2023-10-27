#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: number
 * @index: bit that is changed to zero
 *
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
