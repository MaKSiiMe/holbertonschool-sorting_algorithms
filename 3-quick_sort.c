#include "sort.h"



/**
 * swap - swap two elements
 * @a: pointer to the first element
 * @b: pointer to the second element
 */

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

/**
 * sort_recursive - recursive quick Sort function
 * @array: array to sort
 * @low: the low index of the partition
 * @high: the high index of the partition
 * @size: size of the array
 */

void sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int i = lomuto(array, low, high, size);

		sort_recursive(array, low, i - 1, size);
		sort_recursive(array, i + 1, high, size);
	}
}

/**
 * lomuto - recursive quick Sort function
 * @array: array to sort
 * @low: the low index of the partition
 * @high: the high index of the partition
 * @size: size of the array
 * Return: k + 1
 */

int lomuto(int *array, int low, int high, size_t size)
{
	int i = array[high];
	int j = low;
	int k = low - 1;

	for (; j < high; j++)
	{
		if (array[j] < i)
		{
			k++;
			if (k != j)
			{
				swap(&array[k], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (k + 1 != high)
	{
		swap(&array[k + 1], &array[high]);
		print_array(array, size);
	}
	return (k + 1);
}

/**
 * quick_sort - sorts an array of integers in ascending
 *		order using the Quick sort algorithm
 * @array: integers to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sort_recursive(array, 0, size - 1, size);
}
