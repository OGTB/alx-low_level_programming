
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Find a node in a list
 * @head: Address of the first node in a list
 * @index: Position of the node to find
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
