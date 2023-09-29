#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: first parameter
 * @argv: second parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i < argc)
		{
			printf("%s\n", argv[i]);
		}
		else
		{
			break;
		}
	}
	return (0);
}

