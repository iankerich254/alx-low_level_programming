#include "main.h"
/**
 * int _islower(int c) - indicates whether a character is lowercase or not
 *
 * @c -  ASCII value of the character to be checked
 *
 * Return: 1 if lower and 0  if otherwise
 */

int _islower(int c)
{
	/* My code goes here */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
