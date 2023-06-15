#include "main.h"
#include "stdlib.h"
/**
 *malloc_checked- Function that allocates memory
 *@b: unsigned interger
 *Exit: 98
 *Return: pointer to the allocated memory *Ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
