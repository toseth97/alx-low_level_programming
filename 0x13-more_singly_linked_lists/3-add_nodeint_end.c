#include "lists.h"

/**
 * add_nodeint_end - Function adds node to the last node
 * on the list
 *
 * @head: The struct pointer
 * @n: integer
 * Return: listint_t
 */



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int count = 0;
	listint_t *temp = *head;

	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
		return NULL;

	if (*head == NULL)
		{	*head = new_node;
			return (new_node);
		}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	printf("Int: %d\n", new_node->n);
}
