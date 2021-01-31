#include "sort.h"

/**
 * bubble_sort - sorts an array of integers.
 * @array: the array of integers.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, a = 0;
	int tmp;

	for (; j < size; j++)
	{
		for (; i < size; i++)
		{
			if (!array[i + 1])
				break;
			if (array[i] >= array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				for (; a < size - 1; a++)
					printf("%d, ", array[a]);
				printf("%d", array[a]);
				printf("\n");
				a = 0;
			}
		}
		i = 0;
	}
}
