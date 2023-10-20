#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @h: Pointer that loops through the next node
 *
 * Description: singly linked list node structure
 * Return: @n onSuccess afterExec=while(loop)
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
