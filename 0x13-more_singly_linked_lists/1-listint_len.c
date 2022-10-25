#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list (listint_t)
 * @h: A constant pointer to the member of the list
 * Return: number of nodes(count).
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
