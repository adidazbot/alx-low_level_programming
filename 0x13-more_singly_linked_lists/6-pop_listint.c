#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer that points to the head of the listint_t list.
 *
 * Return: if the linked list is empty return 0
 * Otherwise  returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *adida;
	int k;

	if (*head == NULL)
	{
		return (0);
	}
	adida = *head;
	*head = (*head)->next;
	k = adida->n;
	free(adida);

	return (k);
}
