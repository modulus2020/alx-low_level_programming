#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* num_checker - To check whether input is number or not
* @s: array of strings
*
* Return: Always 0 (Success)
*/
int num_checker(char *s)
{
/*Declaring variables*/
	unsigned int i;
		i = 0;
	while (i < strlen(s)) /*count string*/
	{
	if (!isdigit(s[i])) /*check if str there are digit*/
	{
		return (0);
	}
	i++;
	}
	return (1);
}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
/*Declaring variables*/
	int i;
	int str_to_int;
	int sum = 0;
		i = 1;
	while (i < argc) /*Goes through the whole array*/
	{
		if (num_checker(argv[i]))
		{
			str_to_int = atoi(argv[i]); /*ATOI --> convert string to int*/
				sum += str_to_int;
		}
/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
