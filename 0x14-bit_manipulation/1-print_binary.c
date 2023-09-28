#include "main.h"

/**
 * print_binary - prints the binary representation of a  all numbers.
 * @n: integer num to be printed.
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
