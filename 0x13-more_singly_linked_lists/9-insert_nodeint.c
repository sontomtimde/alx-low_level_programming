#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node
 *at a specific index in a linked list.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be assigned to the new node.
 *
 * Return: A pointer to the newly created node
 * or NULL if memory allocation fails
 *         or the index is out of bounds.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}

