#include "lists.h"

/**
 * free_listint - frees a malloced list
 * @head: pointer to head of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	/* use recursion to access all nodes and free allocated memory */
	free_listint(head->next);
	free(head);
}
