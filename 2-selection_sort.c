#include "sort.h"

/**
 * selection_sort - function that sorts an urray using the selection sort
 * @array: pointer to array of int
 * @size: the size.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}

		if (index != i)
		{
			temp = array[index];
			array[index] = array[i];
			array[i] = temp;

			print_array(array, size);
		}
	}
}
