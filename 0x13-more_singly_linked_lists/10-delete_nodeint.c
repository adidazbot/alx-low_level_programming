#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index.
 * @head: a pointer that points to the head of a list.
 * @index:  the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *adida;
	listint_t *tmp;
	unsigned int k;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		adida = *head;
		*head = (*head)->next;
		free(adida);
		return (1);
	}

	adida = *head;
	tmp = NULL;

	for (k = 0; k < index; k++)
	{
		if (adida == NULL)
		{
			return (-1);
		}
		tmp = adida;
		adida = adida->next;
	}
	tmp->next = adida->next;
	free(adida);

	return (1);
}
