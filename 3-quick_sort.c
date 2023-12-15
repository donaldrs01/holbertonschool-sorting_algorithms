#include <stdio.h>
#include "sort.h"
/**
 * quick_sort - sorts array of integers using the quick sort method
 * @array: the integer array to be sorted in ascending order
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size > 0)
	{
		quick_sort_help(array, 0, size - 1);
	}
}
