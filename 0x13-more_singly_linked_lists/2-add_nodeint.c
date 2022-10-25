#include "lists.h"

/**
 * add_nodeint - Function to add a new node ath the beginning.
 * @head: pointer to the first node
 * @n: Integer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
