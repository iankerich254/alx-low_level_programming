#include "main.h"
/**
 * _islower - Checks for lowercase character
 *
 * @c: The ASCII value of the character to be checked
 *
 * Return: 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	/* The code goes here */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
