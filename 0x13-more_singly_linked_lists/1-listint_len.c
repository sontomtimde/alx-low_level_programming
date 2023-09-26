#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: linked list of type listint_t to traverse
  *
  * Return: The number of elements of a list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
