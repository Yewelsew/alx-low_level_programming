#include <stdio.h>
/**
 * main - prints argument given
 * @argc: in
 * @argv: in
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
