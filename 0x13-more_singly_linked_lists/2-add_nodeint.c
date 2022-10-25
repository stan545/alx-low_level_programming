#include "lists.h"

/**
 * *add_nodeint - A function that adds a new node at the
 * beginning of a listint_t list
 *
 * @head: a pointer to a pointer that holds the addres of
 * the first member of a linked list
 *
 * @n: The number to be inserted at the Head
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
