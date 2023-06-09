#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: a pointer that point the head of a list.
 * @idx: index of the list.
 * @n: value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *adida = *head;
	unsigned int k = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (adida && k < idx - 1)
	{
		k++;
		adida = adida->next;
	}
	if (!adida)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = adida->next;
	adida->next = new_node;

	return (new_node);
}
