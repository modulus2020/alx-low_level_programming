#include "main.h"
#include <stdio.h>

int _actual_sqrt_recursion(int n, int i);

/**
  * _sqrt_recursion - Returns the square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_actual_sqrt_recursion(n, 1));
}

/**
  * _actual_sqrt_recursion - Calculates square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _actual_sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_actual_sqrt_recursion(n, i + 1));
}
