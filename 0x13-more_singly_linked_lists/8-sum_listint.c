#include "lists.h"

/**
 * sum_listint -Write function which returns sum of all data (n)
 *              of a list.
 *
 * @head: pointer to the list first node 
 *
 * Return: the sum of all (n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		/* add n sum*/
		sum += head->n;

		/*go to next node*/
		head = head->next;
	}
	return (sum);
}
