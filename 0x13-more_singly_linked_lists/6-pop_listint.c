#include "lists.h"

/**
 * pop_listint - deletes the head of a list
 * @head: head of the list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
