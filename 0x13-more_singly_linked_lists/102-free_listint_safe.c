#include "lists.h"

/**
 * free_listint_safe - Frees a linked list and handles loops safely.
 * @h: A pointer to a pointer to the first node in the linked list.
 *
 * This function frees a linked list while
 * ensuring safe handling of potential loops
 * in the list. It returns the number of elements freed.
 *
 * @h: A pointer to a pointer to the first node in the linked list.
 *
 * Return: The number of elements freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}

