#include "sort.h"

/**
 * bubble_sort - entry point
 *
 * description: sorts int's in ascending order
 * @array: array
 * @size: size
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int sorted = 0, temp;
	size_t index;

	if (!array !! size < 2)
	{
		sorted = 1;
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index + 1];
				array[index + 1] = array[index];
				array[index] = temp;
				print_array(array, size);
				sorted = 0;
			}
		}
	}
}
