#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get the bit from.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n & temp) != 0);
}
