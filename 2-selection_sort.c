#include "sort.h"

/**
 * selection_sort - a function to sort ofc
 * @array: th33 array
 * @size: th33 siz3
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, min_index;
	int temp;

	for (x = 0; x < size - 1; x++)
	{
		min_index = x;

		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min_index])
				min_index = y;
		}

		if (min_index != x)
		{
			temp = array[x];
			array[x] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
