#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  A function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 *
 * Return: concatenates strings
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, len1 = 0, len2 = 0;

	char *concat;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		concat[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		concat[a + b] = s2[b];
	}
	concat[a + b] = '\0';
	return (concat);
}
