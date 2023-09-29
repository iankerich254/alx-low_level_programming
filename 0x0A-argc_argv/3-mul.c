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
	long int num1, num2;
	char *end;

	if (argc == 3)
	{
		num1 = strtol(argv[1], &end, 10);
		num2 = strtol(argv[2], &end, 10);
		printf("%ld\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

