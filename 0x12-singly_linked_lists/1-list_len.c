#include <stdlib.h>
#include "lists.h"
/**
 * list_len - this function returns the number of elements in a linked list
 * @h: this the pointer to the list_t list
 *
 * Return: returns number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
