#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints it's name
 * @argc: The number of arguments in the main function
 * @argv: An array of arguments in main
 *
 * Return: 0 (Always)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
