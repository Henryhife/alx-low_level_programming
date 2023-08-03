#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from 1 number to another number
 * @k: number one.
 * @l: number two.
 *
 * Return: numbers of bit.
 */
unsigned int flip_bits(unsigned long int l, unsigned long int k)
{
	unsigned int nbits;

	for (nbits = 0; l || k; l >>= 1, k >>= 1)
	{
		if ((l & 1) != (k & 1))
			nbits++;
	}

	return (nbits);
}
