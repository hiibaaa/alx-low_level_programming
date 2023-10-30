#include "main.h"


/**
 * returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: the string to copy
 *  return NULL if str is null
 */

char *_strdup(char *str);
{
	int i = 0, size = 0;
	char *l;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	l = malloc(size * sizeof(*str) + 1);

	if (l == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			l[i] = str[i];
	}
	return (l)
}
