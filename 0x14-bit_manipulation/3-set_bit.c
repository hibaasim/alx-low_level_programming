#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: pointer to number
 * @index: bit index
 *
 * Return: 1 if success, 0 if faliure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
