#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: a pointer that points to the head of the list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *adida;

	while (*head != NULL)
	{
		adida = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = adida;
	}
	*head = tmp;

	return (*head);
}
