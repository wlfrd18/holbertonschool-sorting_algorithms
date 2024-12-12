#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 *
 * @list: Pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next_node = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current->prev;

			if (temp->prev != NULL)
				temp->prev->next = current;

			if (current->next != NULL)
				current->next->prev = temp;

			current->prev = temp->prev;
			temp->next = current->next;
			current->next = temp;
			temp->prev = current;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);
		}

		current = next_node;

	}
}

