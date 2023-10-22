#include "sort.h"

/**
 * bubble_sort - impl of bubble sort O(n^2)
 * @array: the array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int swaped = 1;

	while (swaped)
	{
		size_t i = 0;

		swaped = 0;
		for (i = 0; i < size - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				int tmp;

				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;

				swaped = 1;

				print_array(array, size);
			}
		}
	}
}
