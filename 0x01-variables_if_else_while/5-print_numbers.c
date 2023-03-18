#include <stdio.h>
/**
 * main - Entry point
 * Description: A program to print 0 to 9
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	printf("%d", n);
	}
	putchar('\n');
	return (0);
}
