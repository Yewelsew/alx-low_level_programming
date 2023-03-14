#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		dup = malloc(sizeof(char) * size);
		if (dup)
		{
			while (size--)
				dup[size] = str[size];

			return (dup);
		}
	}
	return (NULL);
}
