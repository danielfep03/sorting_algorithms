#include "sort.h"

/**
 * bubble_sort - sorts an array of integers.
 * @array: the array of integers.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, a = 0, temp;
	int tmp;

	temp = size;
	for (; j < size; j++)
	{
		for (; i < temp; i++)
		{
			if (!array[i + 1])
				break;
			if (array[i] >= array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				a = 0;
			}
			if (i == temp - 1)
			{
				temp -= 1;
			}
		}
		i = 0;
	}
}
