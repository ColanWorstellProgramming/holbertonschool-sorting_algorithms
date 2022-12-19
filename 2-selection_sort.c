#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts array bubble wise
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int swap = 0;
	int count = -1;
	size_t x = 0;
	int check = 0;

	while (x < size)
	{
		for (i = 0; i < size; i++)
		{
			swap = swap + array[i];
		}
		for (i = x; i < size; i++)
		{
			if (array[i] < swap)
			{
				swap = array[i];
				count = i;
			}
		}
		
		if (count != check)
		{	
			if (count != -1)
			{
				array[count] = array[x];
				array[x] = swap;

				if (x != size-1)
					print_array(array, size);

				x++;
			}
		}
		else
		{
			x++;
		}
		check = count;
	}
}
