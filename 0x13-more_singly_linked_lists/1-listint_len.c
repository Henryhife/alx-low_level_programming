#include "lists.h"

/**
 * listint_len - the function which returns element numbers.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 1;

	/*return 0 as no of elements when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count all the no of elements*/
		if (h->n != '\0')
			elements++;

		h = h->next;
	}

	return (elements);
}
