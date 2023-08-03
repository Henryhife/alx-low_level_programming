#include "main.h"

/**
 * set_bit - sets to 1, value of a bit
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index bit.
 *
 * Return: 1 if successful, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
