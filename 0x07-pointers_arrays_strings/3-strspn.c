#include "main.h"
/**
* _strspn - get the length of sub-text
* of a prefix substring.
* @s: char array
* @accept: char array
* Return: break position
*/
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y = 0;

	while (s[y])
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == s[y])
			{
				break;
			}
		}
		if (!accept[x])
		{
			break;
		}
		y++;
	}
	return (y);
}
