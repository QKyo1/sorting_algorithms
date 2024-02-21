#include "sort.h"

/**
 * bubble_sort - aa function to sort array in bubbles
 * @array: th3 array that wanted to be sorted
 * @size: th3 size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int temp;
	int swap;

	for (x = 0; x < size - 1; x++)
	{
		swap = 0;
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}

		if (swap == 0)
			break;
	}
}
