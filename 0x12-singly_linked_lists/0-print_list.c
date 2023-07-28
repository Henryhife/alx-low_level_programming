#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of linked list
 * @h: pointer to list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *r)
{
	size_t s = 0;

	while (r)
	{
		if (!r->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", r->len, r->str);
		r = r->next;
		s++;
	}

	return (s);
}
