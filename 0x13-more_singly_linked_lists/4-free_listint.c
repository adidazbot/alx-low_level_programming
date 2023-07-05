#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer that points to the head of a list.
 */
void free_listint(listint_t *head)
{
	listint_t *adida;

	while (head != NULL)
	{
		adida = head;
		head = head->next;
		free(adida);
	}
}
