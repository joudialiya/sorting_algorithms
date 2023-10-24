#include "sort.h"

/**
 * selection_sort - impl
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t current_position = 0;

	for (; current_position < size; ++current_position)
	{
		size_t min_position = current_position;
		size_t offset = 0;

		for (; current_position + offset < size; ++offset)
		{
			if (array[min_position] > array[current_position + offset])
				min_position = current_position + offset;
		}
		if (current_position != min_position)
		{
			int tmp = array[current_position];

			array[current_position] = array[min_position];
			array[min_position] = tmp;
			print_array(array, size);
		}
	}
}
