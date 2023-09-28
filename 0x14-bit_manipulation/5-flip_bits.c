#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result > 0)
	{
		if (result & 1)
		{
			count++;
		}

		result >>= 1;
	}

	return (count);
}
