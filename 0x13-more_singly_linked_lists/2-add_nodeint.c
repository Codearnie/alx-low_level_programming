#include "lists.h"
/**
 * add_nodeint - adds new node at start of a linked list
 * @head: pointer to first node in list
 * @n: data to insert in new node
 * Return: pointer to the new node, else NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
