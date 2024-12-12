#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: Array of integers.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
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
		if (swapped == 0)
			break;
	}
}
