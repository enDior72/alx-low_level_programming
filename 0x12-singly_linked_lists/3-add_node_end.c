#include "lists.h"

/**
 * add_node_end - singly linked list
 * @head: Pointer that loops through the next node
 * @str: Pointer that loops through the next node
 *
 * Description: singly linked list node structure
 * Return: @n onSuccess afterExec=while(loop)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *offset = (NULL);
	list_t *temp = (NULL);

	offset = malloc(sizeof(list_t));

	offset->str = strdup(str);
	offset->len = strlen(str);
	offset->next = NULL;

	if (*head == NULL)
	{
		*head = offset;
		return (*head);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = offset;

	return (*head);
}
