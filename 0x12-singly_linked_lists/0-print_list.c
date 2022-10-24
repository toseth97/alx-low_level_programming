#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print the items in a list of nodes
 * @h: pointer to struct type
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	const list_t *prt = NULL;
	int i = 0;
	
	prt = h;
	
	while (prt != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
