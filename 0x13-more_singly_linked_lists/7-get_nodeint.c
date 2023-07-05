#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *adida;

	adida = head;
	for (k = 0; k < index && adida != NULL; k++)
	{
		adida = adida->next;
	}

	return (adida);
}
