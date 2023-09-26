#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the first node in the list.
 *
 * This function reverses the given linked
 * list by changing the next pointers of
 * the nodes. The head pointer is updated
 * to point to the new first node.
 *
 * Return: A pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;

return (*head);
}
