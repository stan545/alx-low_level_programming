#include "lists.h"

/**
 * *add_nodeint_end - A function that adds a new node at the
 * beginning of a listint_t list
 *
 * @head: a pointer to a pointer that holds the addres of
 * the first member of a linked list
 *
 * @n: The number to be inserted at the Head
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
