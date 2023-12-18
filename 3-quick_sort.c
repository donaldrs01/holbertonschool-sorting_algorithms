#include <stdio.h>
#include "sort.h"
/**
 * swap - function that swaps two positions in array
 * @array: array of integers
 * @i: index of first element to swap
 * @j: index of second element to swap
 * @size: size of array
 */
void swap(int *array, int i, int j, size_t size)
{
        int temp;

        if (array[i] != array[j])
        {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                print_array(array, size);
        }
}
/**
 * lomuto - function to partition array into small/large
 * @array: array of integers
 * @low: index of lowest number
 * @high: index of highest number
 * @size: size of array
 *
 * Return: index of the pivot element
 */

int lomuto(int *array, int low, int high, size_t size)
{
        int pivot = array[high];
        int i = low;
        int j;

        for (j = low; j <= high - 1; j++)
        {
                if (array[j] <= pivot)
                {
                        swap(array, i, j, size);
                        i++;
                }
        }

        swap(array, i, high, size);
        return (i);
}
/**
 * quick_sort_help - performs quicksort on array
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
