#include "main.h"
/**
 * _strtoi - converts chars to ints
 * @c: character to convert
 * Return: converted int
 */
unsigned int _strtoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
 * _strlen - calculates length of string
 * @s: input string
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: 0 if b is NULL or contains chars not 0 or 1, else converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expont;

	if (!b)
		return (0);
	result = tmp = 0;
	expont = 1;
	for (i = _strlen(b) - 1; b[i]; i--, expont *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = _strtoi(b[i]);
		result += tmp * expont;
	}
	return (result);
}
