#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	y = i + j;
	s = malloc((sizeof(char) * y) + y);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (x < l)
	{
		if (x <= i)
			s[k] = s1[k];

		if (x >= i)
		{
			s[x] = s2[j];
			j++;
		}

		x++;
	}

	s[x] = '\0';
	return (s);
}
