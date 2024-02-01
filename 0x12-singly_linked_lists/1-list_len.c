#include "lists.h"
/**
 * list_len - displays the elements of a list
 * @h: linked list
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
