#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main- Entry Point
 *
 *mul: multiplication variable.
 *@argc: counter argument
 *@argv: vector argument
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int ayeni, adida, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	ayeni = atoi(argv[1]);
	adida = atoi(argv[2]);
	mul = ayeni * adida;

	printf("%d\n", mul);

	return (0);
}
