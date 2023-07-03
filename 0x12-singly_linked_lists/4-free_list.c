#include <stdlib.h>
#include "lists.h"
/**
 * free_list - this function frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* this code saves a pointer to the next node */
		temp = head->next;

		/* Free the memory used by the string data */
		free(head->str);

		/* Free the memory used by the node */
		free(head);

		/* Move to the next node */
		head = temp;
	}
}
