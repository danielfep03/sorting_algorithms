#include "sort.h"

/**
 * bubble_sort - sorts an array of integers.
 * @array: the array of integers.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp = size;
	int tmp;

	if (size <= 1 || array == NULL)
		return;
	for (; j < size; j++)
	{
		for (i = 0; i < temp - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			if (i == temp - 1)
				temp -= 1;
		}
	}
}
