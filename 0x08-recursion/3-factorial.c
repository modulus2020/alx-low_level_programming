#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: the input number whose factorial is to determined
 *
 * Return: The factorial of the number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
