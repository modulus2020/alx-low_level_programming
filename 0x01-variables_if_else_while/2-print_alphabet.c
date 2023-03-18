#include <stdio.h>
  
/**
 * main - Program that prints the alphabets a-z
 * Return: always (Success)
 *
 */

int main(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
        putchar(c);
        putchar('\n');
        return (0);
}
