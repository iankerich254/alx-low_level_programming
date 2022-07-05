#include "main.h"
/**
 * int _islower(int c) - indicates whether a character is lowercase or not
 */

int _islower(int c)
{
	/* My code goes here */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
