#include "lists.h"

/**
 * free_listint_safe - it helps to free a linked list
 * @h: it is the pointer to the first node in the linked list
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lens = 0;
	int different;

	listint_t *temp;

	if (!h || !*h)
	return (0);
	while (*h)
	{
	different = *h - (*h)->next;
	if (different > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	lens++;
	}
	else
	{
	free(*h);
	*h = NULL;
	lens++;
	break;
	}
	}
	*h = NULL;
	return (lens);
}
