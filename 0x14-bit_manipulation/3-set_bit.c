#include "main.h"
/**
 * set_bit - this function sets value of a bit at a given index
 * @n: pointer to the bit
 * @index: index to set the value at
 * Return: -1 if error occurs, else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

