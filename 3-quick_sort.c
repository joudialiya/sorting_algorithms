#include "sort.h"


/**
 * lomuto_partition - qs
 * @array: array
 * @lo: low index
 * @hi: high index
 * @size: array
 * Return: pivot
 */
int lomuto_partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo - 1;
	int j = lo;
	int tmp;

	(void)size;
	for (j = lo; j < hi; ++j)
	{
		if (array[j] < pivot)
		{
			i = i + 1;
			if (i < j)
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
	i = i + 1;
	if (array[i] > array[hi])
	{
		array[hi] = array[i];
		array[i] = pivot;
		print_array(array, size);
	}
	return (i);
}


/**
 * quick_sort_helper - qs
 * @array: array
 * @lo: low index
 * @hi: high index
 * @size: array
 */
void quick_sort_helper(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi || lo < 0)
	{
		return;
	}
	p = lomuto_partition(array, lo, hi, size);

	quick_sort_helper(array, lo, p - 1, size);
	quick_sort_helper(array, p + 1, hi, size);
}


/**
 * quick_sort - qs
 * @array: array
 * @size: array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}
