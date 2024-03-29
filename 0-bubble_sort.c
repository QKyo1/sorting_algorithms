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

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
