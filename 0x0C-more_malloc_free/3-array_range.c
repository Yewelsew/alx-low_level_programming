#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * @min: incoming parameter
 * @max: incoming parameter
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int idx, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(len * sizeof(int));
	if (!ptr)
		return (NULL);

	for (idx = 0; idx < len; idx++)
		ptr[idx] = min++;

	return (ptr);
}
