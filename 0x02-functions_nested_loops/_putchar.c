#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - Writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 *
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
