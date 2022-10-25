#include "lists.h"


/**
 * add_nodeint - Entry Point
 * @head: head
 * @n: value
 * Return: 0
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
