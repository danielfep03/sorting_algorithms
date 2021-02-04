#include "sort.h"
/**
 * quick_sort - quick sort function
 * @array: array
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
/**
 * quicksort - added mofe parameters to quick sorts
 * @array: array
 * @start: init position
 * @next: end position
 * @size: size of the array
 * Return: void
 */
void quicksort(int *array, ssize_t start, ssize_t next, size_t size)
{
	if (start < next)
	{
		int pivot = partition(array, start, next, size);

		quicksort(array, start, pivot - 1, size);
		quicksort(array, pivot + 1, next, size);
	}
}
/**
 * swapp - swaps two numbers
 * @n1: first number
 * @n2: second number
 * Return: void
 */
void swapp(int *n1, int *n2)
{
	int tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

/**
 * partition - pivot and swapps elements
 * @array: array
 * @start: init position
 * @next: end position
 * @size: size of the array
 * Return: pivot number
 */

int partition(int *array, ssize_t start, ssize_t next, size_t size)
{
	int pivot = array[next];
	ssize_t j = start, i;

	for (i = start; i < next; i++)
		if (array[i] < pivot)
		{
			if (j != i)
			{
				swapp(&array[j], &array[i]);
				print_array(array, size);
			}

			j++;
		}
	if (array[next] != array[j])
	{
		swapp(&array[next], &array[j]);
		print_array(array, size);
	}
	return (j);
}
