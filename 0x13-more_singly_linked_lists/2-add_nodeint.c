#include "lists.h"

/**
 * add_nodeint - Function to add a new node ath the beginning.
 * @head: pointer to the first node
 * @n: Integer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int i = 0;

	if (head == NULL || head == NULL)
		return (0);

	listint_t *temp = malloc(sizeof(listint_t));
	
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp
	}
	return (temp);
}
