#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments
 * @argc: The number of arguments in the main function
 * @argv: An array of arguments in main
 *
 * Return: 0 (Always)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
(void) argv; /* To ignore unused argument*/
printf("%d\n", argc - 1);
return (0);
}
