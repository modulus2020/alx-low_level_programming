#include <stdio.h>
/**
 * main- The Entry
 * Description: To print from one to nine with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);

}
