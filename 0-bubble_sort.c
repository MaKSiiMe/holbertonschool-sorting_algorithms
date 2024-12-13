#include "sort.h"

/**
 * swap - function to swap value
 * @i: value that has to swap her place with j
 * @j: value that has to swap her place with i
 * @arr: pointer
 */

void swap(int *arr, size_t i, size_t j)
{
	size_t temp = arr[i];

	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * bubble_sort - function that bubble sort an array of value calling
 * the function swap
 * @array: pointer to the array of integers.
 * @size: numbers of byte
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
