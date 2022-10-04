#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create a new array from pointer
 * @size: specifies the size of the memory to be allocated using malloc
 * @c: character to copy
 * Return: returns char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	if (ar != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}
	else
	{
		return (NULL);
	}

	return (ar);
}
