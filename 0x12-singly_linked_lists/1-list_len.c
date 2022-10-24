#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of nodes
 * @h: struct pointer
 * Return: Number of nodes
 */


size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
