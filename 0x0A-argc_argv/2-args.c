#include <stdio.h>
#include "main.h"

/**
 * main - Entry
 * @argc: argument
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
