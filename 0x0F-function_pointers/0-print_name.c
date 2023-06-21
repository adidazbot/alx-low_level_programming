#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name- The function to print a Name
 *@name: Is the argument for name
 *@f: is the pointer to the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	(*f)(name);
}
