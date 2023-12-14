#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list using insertion
 * @list: a list of integers to be sorted in ascending o
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next; /* current points to 2nd node */

	while (current != NULL)
	{
		prev = current->prev; /* prev node before current */
		temp = NULL; /* temp pointer for swapping nodes */

		/* iterate through sorted part to find correct position */
		while (prev != NULL && prev->n > current->n)
		{
			temp = prev->prev;
			/* temp keeps track of node before prev */

			if (temp != NULL)
				temp->next = current; /* node swap */
			else
				*list = current;

			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;

			current->prev = temp;
			current->next = prev;

			prev->prev = current;

			print_list(*list);

			prev = temp;
		}

		current = current->next;
	}
}


