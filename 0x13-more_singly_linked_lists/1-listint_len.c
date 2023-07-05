#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: a pointer to const listint_t
 *
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t adida = 0;

	while (h != NULL)
	{
		h = h->next;
		adida++;
	}
	return (adida);
}
