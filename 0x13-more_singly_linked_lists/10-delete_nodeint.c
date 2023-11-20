#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * in a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
