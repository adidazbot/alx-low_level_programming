#include "main.h"
#include <stdio.h>
/**
 *main- Entry Point
 *
 *@argc: argument counter or number count of command line
 *@argv: argument vector or length of string
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
