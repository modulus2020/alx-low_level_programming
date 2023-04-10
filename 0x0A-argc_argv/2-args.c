#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives
 * @argc: The number of arguments in the main function
 * @argv: An array of arguments in main
 *
 * Return: 0 (Always)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
return (0);
}
