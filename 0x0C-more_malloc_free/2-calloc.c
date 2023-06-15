#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  Entry Point
 * @nmemb: string 1
 * @size: string 2
 *
 * Return: NULL
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
