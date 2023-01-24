#include "sort.h"

/**
 * swap: function to swap 2 elements in array
 * @a: element 1
 * @b: element 2
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * quick_sort -algo to do a sort on the data
 * @array: var 1
 * @size: var 2
 * Return: Nothing
 */


void quick_sort(int *array, size_t size)
{
	int pivot = array[high];
	size_t i = low;
	for (size_t j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			print_array(array, high + 1);
			i++
		}
	}
	swap(&array[i], *array[high]);
	print_array(array, high + 1);
	return i;
}


/**
 * quick_sort - func to sort array of ints using quick sort & L
 * @array: var 1
 * @low: var 2
 * @high: var 3
 */


void quick_sort(int *array, size_t low, size_t high)
{
	if (low < high)
	{
		size_t pivot_index = partition(array, low, high);
		quick_sort(array, low, pivot_index - 1);
		quick_sort(array, pivot_index + 1; high)
	}
}
