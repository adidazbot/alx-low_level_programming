#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator- function of an array on each element
 *@array: array
 *@size: number of elements
 *@action: pointer to print in regular
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
