#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int leng;
	listint_t *h;
	listint_t *pop;

	if (*head == NULL)
		return (0);

	pop = *head;

	leng = pop->n;

	h = pop->next;

	free(pop);

	*head = h;

	return (leng);
}
