#include "sort.h"

/**
 * selection_sort - Sort a selection of array.
 * @array: Array to sort.
 * @size: Size of array.
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		print_array(array, size);
	}
}
