#include "sort.h"

/**
 * quick_sort - a function to quick soort
 * @array: th33 array-
 * @size: the siz3 of th3 ara=ray
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}

/**
 * lomuto_partition - lomutoo pationaiitoo
 * @array: anoth33r array33
 * @low: lowww2
 * @high: highhhh3
 * @size: th33 siz3 ofccc 6b3a
 * Return: to the par3tionss
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1;
	int y, temp;

	for (y = low; y <= high - 1; y++)
	{
		if (array[y] < pivot)
		{
			x++;
			if (x != y)
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
	}

	if (array[x + 1] != array[high])
	{
		temp = array[x + 1];
		array[x + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (x + 1);
}

/**
 * quicksort - help3r functionn
 * @array: th33 arrayy33
 * @low: lowwww3
 * @high: high334
 * @size: th33 siz333e
 */
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high, size);

		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}
