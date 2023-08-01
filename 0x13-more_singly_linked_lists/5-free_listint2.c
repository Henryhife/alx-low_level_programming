A#include "lists.h"

/**
 * free_listint2 - write a Function which frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
