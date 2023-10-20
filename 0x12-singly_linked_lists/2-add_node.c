#include "lists.h"

/**
 * add_node - singly linked list
 * @head: Pointer that loops through the next node
 * @str: Pointer that loops through the next node
 *
 * Description: singly linked list node structure
 * Return: @n onSuccess afterExec=while(loop)
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *offset = NULL;

	if (head == NULL)
		return (NULL);

	offset = malloc(sizeof(list_t));

	offset->str = strdup(str);
	offset->len = strlen(str);
	offset->next = *head;
	*head = offset;

	return (*head);
}
