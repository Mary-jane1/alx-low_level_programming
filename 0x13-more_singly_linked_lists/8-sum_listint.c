#include "lists.h"

/**
 * sum_listint - it helps to calculate the sum of all
 * the data in a listint_t list
 * @head: it is the first node in the linked list
 *
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temps = head;

	while (temps)

	{
	sum += temps->n;
	temps = temps->next;
	}

	return (sum);
}
