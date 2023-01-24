#include <stdio,h>


/**
 * swap - function to swap elements around
 * @xp: one var
 * @yp: second var
 * Return: Nothing
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


/**
 * selection_sort - function to array of ints
 * @array: 1st var
 * @size: 2nd var
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;

	for size_t i = 0; i < size - 1; i++)
	{
		size_t main = 0;

		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
