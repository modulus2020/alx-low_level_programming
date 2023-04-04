#include "main.h"
/**
 * _memset - this fills memory with a constant byte b
 * @s: is the memory area to be filled
 * @b: the character to copy
 * @n: the number of time b should be copied
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}

