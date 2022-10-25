#include <lists.h>

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: A constant pointer to the member of the list
 * Return: number of nodes(count).
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *temp;

	temp = h;
	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
