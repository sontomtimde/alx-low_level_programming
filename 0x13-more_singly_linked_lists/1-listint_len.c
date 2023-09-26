#include "lists.h"

/**
 * listint_len - Calculate number of elements in linked list.
 * @h: The pointer to head of linked list.
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
