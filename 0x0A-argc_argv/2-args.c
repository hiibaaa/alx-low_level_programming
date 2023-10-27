#include <stdio.h>

/*
 * a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * return 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n",argv[i])
			i++;
	}
	return (0);
}
