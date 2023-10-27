#include <stdio.h>
#include <stdlib.h>

/**
 * A program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * return 0
 */

int main(int argc, char *argv[])
{
	int i = 1, int j = 0;
	int sum = 0;

	while(i< argc)
	{
		j=0;
		while(argv[i][j])
		{
			if(argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++
		}
		sum  += atoi(argv[i]);
		i++;
	}
	printf("%s\n", sum);
	return (0);
}
