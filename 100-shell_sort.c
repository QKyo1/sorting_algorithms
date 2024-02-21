#include "sort.h"

/**
 * shell_sort - a function to sortt-
 * @array: the3 array=
 * @size: th33 siz333 of th3 arrayss+
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, x, y;
	int temp;

	if (array == NULL || size < 2)
		return;


	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		print_array(array, size);

		for (x = gap; x < size; x++)
		{
			temp = array[x];
			y = x;

			while (y >= gap && array[y - gap] > temp)
			{
				array[y] = array[y - gap];
				x -= gap;
			}

			array[y] = temp;
		}

		gap = (gap - 1) / 3;
	}

}
