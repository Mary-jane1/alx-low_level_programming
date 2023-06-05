#include "lists.h"

/**
 * delete_nodeint_at_index - it helps to delete
 * a node in a linked list at a certain index
 * @head: the pointer to the first element in the list
 * @index: the index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps = *head;
	listint_t *currents = NULL;

	unsigned int i = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)

	{
	*head = (*head)->next;
	free(temps);
	return (1);
	}

	while (i < index - 1)

	{
	if (!temps || !(temps->next))
	return (-1);
	temps = temps->next;
	i++;
	}

	currents = temps->next;
	temps->next = currents->next;
	free(currents);
	return (1);
}
