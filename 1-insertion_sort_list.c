#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *next = *list;

	if (!list || !*list)
		return;
	while (next)
	{
		current = next;
		next = next->next;
		while (current->prev && current->n < current->prev->n)
		{
			listint_t *prev;

			prev = current->prev;
			if (current->next)
				current->next->prev = prev;
			prev->next = current->next;

			if (prev->prev)
				prev->prev->next = current;
			current->prev = prev->prev;

			current->next = prev;
			prev->prev = current;

			if (current->next == *list)
				*list = current;

			print_list(*list);
		}
	}
}
