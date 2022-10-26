#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: the head of a list
 *
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t nnodes = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		nnodes += 1;
		cursor = cursor->next;
	}
	return (nnodes);
}
