#include <stdio.h>
#include <stdlib.h>

/**
 *a program that multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *return 0
 */

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Error\n");
		return (1);

	}
	else
		printf("%s\n",atoi(argv[1] * atoi(argv[2]));
				return (0);

}
