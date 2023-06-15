#include <stdlib.h>
#include <string.h>
/**
 *_realloc- reallocates a memory
 *@ptr: pointer to the previous memory allocated
 *@old_size: size of bytes allcated to pointer ptr
 *@new_size: size of bytes of the new memory block
 *
 *Return: pointer ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
