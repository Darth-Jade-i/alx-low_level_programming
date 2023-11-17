#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *contA, *contB;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	contA = malloc(sizeof(list_t));
	if (contA == NULL)
		return (NULL);

	contA->str = strdup(str);
	if (contA->str == NULL)
	{
		free(contA);
		return (NULL);
	}
	while (str[length])
		length++;
	contA->len = length;
	contA->next = NULL;

	if (*head == NULL)
	{
		*head = contA;
		return (contA);
	}

	temp2 = *head;
	while (contB->next)
		contB = contB->next;
	contB->next = contA;
	return (contA);
}
