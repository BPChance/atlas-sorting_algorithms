#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the bubble sort algortithm
 *
 * @array: array to be sorted
 * @size: number of elements in the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		/* if elements not swapped in inner then already sorted */
		if (swapped == 0)
			break;
	}
}
