#include "lists.h"

/**
 * pop_listint - it helps to delete the head node of a linked list
 * @head: the pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temps;

	int num;

	if (!head || !*head)
	return (0);
	num = (*head)->n;
	temps = (*head)->next;
	free(*head);
	*head = temps;

	return (num);
}
