#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: the parameter
 * Return: none
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
