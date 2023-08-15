#include "sort.h"

/**
 * selection_sort - entry point
 *
 * description: sorts an array of int's in ascending order
 * @array: array
 * @size: size
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t index, index_2, m_index;
	int swap;

	for (index = 0; index < size - 1; index++)
	{
		m_index = index;

		for (index_2 = index + 1; index_2 < size; index_2++)
		{
			if (array[index_2] < array[m_index])
			{
				m_index = index_2;
			}
		}
		if (m_index != index)
		{
			swap = array[index];
			array[index] = array[m_index];
			array[m_index] = swap;
			print_array(array, size);
		}
	}
}
