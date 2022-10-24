#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Function to print all elements
 * @h: Structure pointer
 * Return: Number of nodes
 */


size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);

}
