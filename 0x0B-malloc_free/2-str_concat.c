#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
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
	s = malloc((sizeof(char) * y) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (x < l)
	{
		if (x <= i)
			s[x] = s1[x];

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
