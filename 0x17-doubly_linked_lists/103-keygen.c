#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates and prints passwords for crackme5
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, tmp_ke;

	codex = "A-CHRDw871NS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	tmp_ke = (len ^ 59) & 63;
	password[0] = codex[tmp_ke];

	tmp_ke = 0;
	for (i = 0; i < len; i++)
		tmp_ke += argv[1][i];
	password[1] = codex[(tmp_ke ^ 79) & 63];

	tmp_ke = 1;
	for (i = 0; i < len; i++)
		tmp_ke *= argv[1][i];
	password[2] = codex[(tmp_ke ^ 85) & 63];

	tmp_ke = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp_ke)
			tmp_ke = argv[1][i];
	}
	srand(tmp_ke ^ 14);
	password[3] = codex[rand() & 63];

	tmp_ke = 0;
	for (i = 0; i < len; i++)
		tmp_ke += (argv[1][i] * argv[1][i]);
	password[4] = codex[(tmp_ke ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp_ke = rand();
	password[5] = codex[(tmp_ke ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
