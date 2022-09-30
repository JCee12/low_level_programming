#include <stdio.h>

/**
 * main - write a program that prints all arguments it receives
 * @argc: input
 * @argv: input
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
