#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	/* The code goes here */
	int i;

	for (i = 0; *(s + i); i++)
	{}
	return (i);
}
