#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string parameter
 *
 * Return: none
 */
void _puts(char *str)
{
	/* The code goes here */
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
