#include "main.h"
/**
 * _isalpha - Checks whether a character is a letter or not
 *
 * @c: The ASCII value of the character to be checked
 *
 * Return: 1 if alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	/* The code goes here */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
