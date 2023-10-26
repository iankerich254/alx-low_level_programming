#include "main.h"
/**
 * get_endianness - the function checks the endianness
 * Return: 0 if big endian, else 1
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *) &number;

	if (*endian == 1)
		return (1);

	return (0);
}

