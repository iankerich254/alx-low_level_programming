#include "main.h"
/**
 * _isalpha - indicates whether a character is a letter or not
 *
 * @c: ASCII value of the character to be checked
 *
 * Return: 1 if alphatet and 0  if otherwise
 */

int _islower(int c)
{
	/* My code goes here */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
