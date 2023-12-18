#include <stdio.h>
#include "sort.h"
/**
 * quick_sort_help: performs quicksort on array
 * @array: array of integers
 * @low: index of low number
 * @high: index of high number
 * @size: size of array
 */

void quick_sort_help(int *array, int low, int high, size_t size)
{
        int pivot;

        if (low >= high)
        {
                return;
        }
        pivot = lomuto(array, low, high, size);
        quick_sort_help(array, low, pivot - 1, size);
        quick_sort_help(array, pivot +1, high, size);
}

/**
 * quick_sort - sorts array of integers using the quick sort method
 * @array: the integer array to be sorted in ascending order
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_help(array, 0, size - 1, size);
}
