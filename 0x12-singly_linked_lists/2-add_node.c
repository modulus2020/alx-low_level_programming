#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *vew;
	size_t nchar;

	vew = malloc(sizeof(list_t));
	if (vew == NULL)
		return (NULL);

	vew->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++);

	vew->len = nchar;
	vew->next = *head;
	*head = vew;

	return (*head);
}
