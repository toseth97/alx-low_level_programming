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
	int i = 0;


	if (h == NULL)
		return(0);	
	
	while (h != NULL)
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
