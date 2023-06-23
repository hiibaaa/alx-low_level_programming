#include "main.h"

/**
 * print_line - print line n time
 *
 * @n: printed times
 *
 * Return: no return
 */



void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');

		}
		_putchar('\n');

	}

	else
	{
		_putchar('\n');
	}

}
