#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
