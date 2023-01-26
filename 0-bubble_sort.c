#include "sort.h"

/**
 * bubble_sort - function to sort ints
 * @array: varaible for all integers to be sorted
 * @size: the number of integers
 * Return: a sorted list
 */

void bubble_sort(int *array, size_t size)
{
	size_t  i = 0, j, temp;
	int swapped = 0;

	if (size < 2 || array == NULL)
		return;

	do {
		swapped = 0;

		for (j = 0; j < (size - (i + 1)); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);

				swapped = 1;
			}
		}
	} while ((++i < size) && swapped);
}
