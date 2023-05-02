#include "lists.h"
/**
 * print_listint - function that prints all element in list
 * @h: head of the list
 *
 * Return: Number of nodes(print)
 */
size_t print_listint(const listint_t *h)
{
	size_t print = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		print++;
	}
	return (print);
}
