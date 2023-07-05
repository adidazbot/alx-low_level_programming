#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint_t list
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t tem = 0;
	const listint_t *adida = NULL;

	if (h == NULL)
	{
		return (0);
	}

	adida = h;
	while (adida != NULL)
	{
		printf("%d\n", adida->n);
		adida = adida->next;
		tem++;
	}

	return (tem);
}
