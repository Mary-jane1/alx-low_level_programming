#include "lists.h"

/**
 * free_listint - it frees a linked list
 * @head: the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temps;

	while (head)

	{
	temps = head->next;
	free(head);
	head = temps;
	}
}

