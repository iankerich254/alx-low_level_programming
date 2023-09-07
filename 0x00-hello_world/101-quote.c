#include <stdio.h>
/**
 * main - Entry into the program
 *
 * Return: 1
 */
int main(void)
{
	char *message = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
	fwrite(message, 1, 51, stderr);
	return (1);
}
