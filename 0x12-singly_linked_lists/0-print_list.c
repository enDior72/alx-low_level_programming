#include "lists.h"

/**
 * print_list - singly linked list
 * @h: Pointer that loops through the next node
 *
 * Description: singly linked list node structure
 * Return: @n onSuccess afterExec=while(loop)
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	}

	return (n);
}
