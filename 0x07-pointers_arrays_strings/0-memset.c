#include "main.h"

/**
 * _memset - this fills memory with a constant byte b
 * @s: is the memory area to be filled
 * @b: the character to copy
 * @n: the number of time b should be copied
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n++;
	}
	return (s);

}

