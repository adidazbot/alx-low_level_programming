#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer.
 */
void free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		listint_t *adida = *head;
		*head = (*head)->next;
		free(adida);
	}
	*head = NULL;
}
