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

	current = (*list)->next;

	while (current != NULL)
	{
		prev = current->prev;
		temp = NULL;

		while (prev != NULL && prev->n > current->n)
		{
			temp = prev->prev;

			if (temp != NULL)
				temp->next = current;
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


