#include "main.h"
/**
 * _isdigit - checks for digits
 *
 * @c: an integer parameter
 *
 * Return: returns an int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
