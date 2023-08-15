#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - doubly linked list node
 *
 * @n: int sotred node
 * @prev: pointer to previous element of list
 * @next: point to next element of list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

#endif
