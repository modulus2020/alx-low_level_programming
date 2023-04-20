#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function pointer that prints name
 * @name: the name to be printed
 * @f: the function pointer
 *
 * Returns: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
