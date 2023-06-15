#include <stdlib.h>
#include "main.h"
/**
 *array_range- function that creates an array of integers.
 *
 *@min: minimum value
 *@max: maximum value
 *Return: the array of the value.
 */
int *array_range(int min, int max)
{
	int a;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 2) * sizeof(int));

	if (!arr)
	{
	return (NULL);
	}
	for (a = 0; a <= max - min; a++)
	{
		arr[a] = min + a;
	}

	return (arr);

}
