#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string input
 * Return: pointer to dest
 */
char *leet(char *s)
{
	int count = 0, i;
	int lower_char[] = {97, 101, 111, 116, 108};
	int upper_char[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower_char[i] || *(s + count) == upper_char[i])
			{
				*(s + count) = num[i];
				break;
			}
		}
		count++;
	}
	return (s);
}

