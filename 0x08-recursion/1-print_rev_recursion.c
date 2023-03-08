#include "main.h"

/**
 * main - check the code
 * @s: string
 * _print_rev_recursion - Prints a string in reverse
 *
 * Return: Always return nithing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
