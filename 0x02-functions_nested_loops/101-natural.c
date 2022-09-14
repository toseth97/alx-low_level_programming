/*
 * File: 101_natural.c
 * Auth: Lawal
 */

#include "main.h"

/**
 * main - prints natural number
 * Return: zero
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
