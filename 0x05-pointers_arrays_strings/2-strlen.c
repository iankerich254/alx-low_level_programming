#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the parameter
 * Return: integer
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{}
	return (i);
}
