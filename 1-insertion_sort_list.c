#include "sort.h"

/**
 * bubble_sort - sorts array bubble wise
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{

	int x;
	listint_t *hold;

	if ((*list) != NULL && (*list)->next != NULL)
	{
		while ((*list)->next != NULL)
		{
			x = (*list)->next->n;

			if ((*list)->n < x)
			{
				if ((*list)->next != NULL)
				{
					hold = (*list)->next;
					hold->next = (*list)->next->next;
					hold->prev = (*list)->next->prev;

					(*list)->next = (*list);
					(*list)->next->prev = (*list)->prev;
					(*list)->next->next = (*list)->next;

					(*list) = hold;
					(*list)->prev = hold->prev;
					(*list)->next = hold->next;
				}
				print_list((*list));
			}
		}

		while ((*list)->next != NULL)
		{
			if ((*list)->next != NULL)
			{
				if ((*list)->next->n > (*list)->n)
				{
					insertion_sort_list(list);
					break;
				}
			}
		}
	}
}
