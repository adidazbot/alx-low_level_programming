#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: binary number as string.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int k = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] == '0' || b[k] == '1')
		{
			num <<= 1;
			if (b[k] == '1')
			{
				num = num + 1;
			}
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
