#include "main.h"
#include <stdlib.h>
/**
 *create_array- function to create an array
 *@size: size of the argument
 *@c: length of each character or array
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *b;

	unsigned int i;

	b = malloc(sizeof(char) * size);

	if (size == 0 || b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}
