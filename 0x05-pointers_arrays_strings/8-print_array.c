#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that printsn element of an array
 * @a: inpput array
 * @n: Element of array to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
