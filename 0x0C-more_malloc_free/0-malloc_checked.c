#include "main.h"

/**
 * malloc_check - memorry allocation
 * @b: int size
 * Return: Returns a pointer
 */



void *malloc_checked(unsigned int b)
{
	void *m = NULL;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}	
