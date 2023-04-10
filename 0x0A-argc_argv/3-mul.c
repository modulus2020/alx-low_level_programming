#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, b, n, len, f, digit;
		a = 0;
	b = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
		while (s[len] != '\0')
			len++;
		while (a < len && f == 0)
		{
			if (s[a] == '-')
				++b;
			if (s[a] >= '0' && s[a] <= '9')
			{
				digit = s[a] - '0';
				if (b % 2)
					digit = -digit;
				n = n * 10 + digit;
				f = 1;
				if (s[a + 1] < '0' || s[a + 1] > '9')
					break;
				f = 0;
			}
			a++;
		}
		if (f == 0)
			return (0);
		return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mul, first_num, second_num;
		if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	first_num = _atoi(argv[1]);
	second_num = _atoi(argv[2]);
	mul = first_num * second_num;
	printf("%d\n", mul);
	return (0);
}
