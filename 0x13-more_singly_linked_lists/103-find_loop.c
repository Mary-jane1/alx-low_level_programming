#include "lists.h"

/**
 * find_listint_loop - it finds the loop in a linked list
 * @head: the linked list to search for
 *
 * Return: the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rest = head;
	listint_t *calm = head;

	if (!head)
	return (NULL);
	while (rest && calm && calm->next)

	{
	calm = calm->next->next;
	rest = rest->next;
	if (calm == rest)
	{
	rest = head;
	while (rest != calm)
	{
	rest = rest->next;
	calm = calm->next;
	}
	return (calm);
	}
	}
	return (NULL);
}
