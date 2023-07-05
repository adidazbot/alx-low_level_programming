#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the head of the listint_t lists.
 * @n: value to store in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adida;
	listint_t *bolt;

	adida = malloc(sizeof(listint_t));
	if (adida == NULL)
	{
		return (NULL);
	}
	adida->n = n;
	adida->next = NULL;
	if (*head == NULL)
	{
		*head = adida;
	}
	else
	{
		bolt = *head;
		while (bolt->next != NULL)
		{
			bolt = bolt->next;
		}
		bolt->next = adida;
	}
	return (adida);
}
