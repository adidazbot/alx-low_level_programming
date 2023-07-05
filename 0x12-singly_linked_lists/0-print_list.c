#include <stdio.h>
#include "lists.h"
/**
 * print_list -  this program prints all the elements of a linked list
 * @head: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *head)
{
	size_t counter = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);

		head = head->next;
		counter++;
	}

	return (counter);
}
