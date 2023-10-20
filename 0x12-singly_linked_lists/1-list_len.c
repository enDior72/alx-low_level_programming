#include <stdio.h>
#include "lists.h"

/**
 * list_len - singly linked list
 * @h: Pointer that loops through the next node
 *
 * Description: singly linked list node structure
 * Return: @n onSuccess then end.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
