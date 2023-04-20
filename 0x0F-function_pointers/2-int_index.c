#include "function_pointers.h"
#include <stddef.h>
#include "stddef.h"
/**
  * int_index - function that searches for an integer
  * @array: an array of integers
  * @size: number of integers
  * @cmp: pointer to a function
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
