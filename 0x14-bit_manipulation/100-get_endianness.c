#include "main.h"

/**
 * get_endianness - function to check the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int g;
	char *a;

	g = 1;
	a = (char *) &g;

	return ((int)*a);
}
