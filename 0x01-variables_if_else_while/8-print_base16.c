#include <stdio.h>
/**
 * main - Entry point for the program
 * Description: Program to print hexadecimal numbers in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for  (a = 48; a <= 57; a++)
		putchar(a);
	for (b = 97; b <= 102; b++)
		putchar(b);
	putchar('\n');
	return (0);

}
