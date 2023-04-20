#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function iterating an array
 * @size: is the size of the array
 * @action: is the function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (index < size)
		{
			action(array[index]);
			index++;
		}
	}
}
