#include "main.h"

/**
 * flip_bits - shows the number of bits you would need to 
 * flip to get from one number to another.
 * @n: number
 * @m: number to flip into
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j = 0;
	unsigned long int sum;

	sum = m ^ n;
	while (sum != 0)
	{
		if ((sum & 1) != 0)
			j++;
		sum = sum >> 1;
	}
	return (j);
}
