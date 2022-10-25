#include "lists.h"

/**
 * free_listint - Free the head memory
 * @head: Struct pointer to head
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free(head);
	head = NULL;
}
