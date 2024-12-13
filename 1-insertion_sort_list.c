#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *			in ascending order using the Insertion sort algorithm
 * @list: list of integer to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		tmp = current->prev;

		while (tmp != NULL && tmp->n > current->n)
		{
			tmp->prev ? (tmp->prev->next = current) : (*list = current);

			current->prev = tmp->prev;
			tmp->prev = current;
			tmp->next = current->next;
			current->next = tmp;

			if (tmp->next)
				tmp->next->prev = tmp;

			print_list(*list);

			tmp = current->prev;
		}

		current = current->next;
	}
}
