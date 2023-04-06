#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the input variable
 *
 * Return: return 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length += _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
