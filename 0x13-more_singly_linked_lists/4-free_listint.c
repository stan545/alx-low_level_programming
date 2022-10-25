#include "lists.h"

/**
 * free_listint - This function free a linkedlist
 * @head: a pointer to first member of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 00)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
