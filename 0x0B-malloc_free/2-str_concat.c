#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: NULL if memory allocation fails,
 * otherwise a pointer to a the new string
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

	while (x < y)
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
