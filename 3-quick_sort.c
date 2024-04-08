#include "sort.h"
/**
 * sorts an array of ints in ascending order
 * using quick sort algorithm with the
 * lomuto partition scheme
 *
 * @array: array to be sorted
 * @size: number if elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_quick_sort(array, 0, size - 1, size);
}

/**
 * _quick_sort - recursive function to perform quick sort
 *
 * @array: array to be sorted
 * @low: the starting index of the partition to be sorted
 * @high: the ending index of the partition to be sorted
 * @size: number of elements in the array
 * Return: void
 */
void _quick_sort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = _partition(array, low, high, size);

		_quick_sort(array, low, pi - 1, size);
		_quick_sort(array, pi + 1, high, size);
	}
}

/**
 * _partition - partition function for quick sort
 *
 * @array: array to be sorted
 * @low: starting index of the partition
 * @high: ending index of the partiton
 * @size: number of elements in the array
 *
 * Return: index of pivot element after partitioning
 */
int _partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);

	return (i + 1);
}
