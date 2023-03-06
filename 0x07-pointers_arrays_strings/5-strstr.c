#include "man.h"

/**
* _strstr - locates a substring.
* @haystack: char array
* @needle: char array (keyword)
*
* Return: array
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
