#include "lists.h"

/**
 * free_listint - a function frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *lead;

	while ((lead = head) != NULL)
	{
		head = head->next;
		free(lead);
	}
}
