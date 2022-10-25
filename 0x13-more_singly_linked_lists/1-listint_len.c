#include "lists.h"

/**
 * listint_len - Function to get the length of nodes
 * @h: structure pointer, It points to the base address
 * Return: always return the len of the node.
 */


size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
