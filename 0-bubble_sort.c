#include "sort.h"

/**
 * bubble_sort - sorts array bubble wise
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{

	size_t i = 0;
	int x, hold;
	
	for (i = 0; i < size; i++)
	{
		if (array[i + 1] != '\0')
		{
			x = array[i] + 1;

			if (array[i] > x)
			{
				hold = array[i];
				array[i] = x;
				x = hold;
				print_array(array, size);
			}
		}
	}
}
