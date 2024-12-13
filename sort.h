#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - The doubly linked list node
 * @n: The current integer in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
