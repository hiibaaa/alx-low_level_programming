#include "main.h"

/**
 * _abs - print the sign of number
 * @c: the number that will be checked
 * Return: 1 if number > 0 or 0 if number = 0 or -1 if number < 0
*/

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
