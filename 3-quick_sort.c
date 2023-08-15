#include "sort.h"

/**
 * quick_sort - entry point
 *
 * description: sorts an array of int's with qucik sort alg
 * @array: array
 * @size: size
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	sorter(array, size, array, size);
}

/**
 * sorter - entry point
 *
 * description: quick sort alg from an array of ints
 * @array: array
 * @size: size
 * @array_print: full array used for printing
 * @size_print: Full array sized for printing
 *
 * Return: void
 */

void sorter(int *array, size_t size, int *array_print, size_t size_print)
{
	size_t index, index_2 = 0;
	int n = 0;

	for (index = 0; index < size; index++)
	{
		if (array[size - 1] >= array[index])
		{
			if (index != index_2)
			{
				n = array[index];
				array[index] = array[index_2];
				array[index_2] = n;
				print_array(array_print, size_print);
			}
			index_2++;
		}
	}
	if (index_2 > 2)
	{
		sorter(array, index_2 - 1, array_print, size_print);
	}
	if ((size - index_2 + 1) > 2)
	{
		sorter(array + index_2, size - index_2, array_print, size_print);
	}
}
