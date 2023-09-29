#include "main.h"
/**
 * _isupper - checks for uppercase characters
 *
 * @c: an integer parameter
 *
 * Return: returns an int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
