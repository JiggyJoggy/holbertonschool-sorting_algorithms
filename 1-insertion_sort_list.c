#include "sort.h"

/**
 * insertion_sort_list - entry point
 *
 * description: sorts a doubly linked list of int's in ascending order
 * @list: doubly linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current;

	if (!list)
	{
		return;
	}
	current = *list;

	while (current)
	{
		while (current->next && (current->n > current->next->n))
		{
			sorted = current->next;
			current->next = sorted->next;
			sorted->prev = current->prev;

			if (current->prev)
			{
				current->prev->next = sorted;
			}
			if (sorted->next)
			{
				sorted->next->prev = current;
			}
			current->prev = sorted;
			sorted->next = current;

			if (sorted->prev)
			{
				current = sorted->prev;
			}
			else
			{
				*list = sorted;
			}
			print_list(*list);
		}
		current = current->next;
	}
}
