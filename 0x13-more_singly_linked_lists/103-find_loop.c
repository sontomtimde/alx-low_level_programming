#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the linked list to search for a loop.
 *
 * This function uses Floyd's Tortoise and Hare
 * algorithm to find a loop in the
 * linked list. If a loop is found, it returns
 * the address of the node where the
 * loop starts; otherwise, it returns NULL.
 *
 * @head: Pointer to the linked list to search for a loop.
 *
 * Return: The address of the node where the loop
 * starts, or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}

