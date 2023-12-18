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

	for (int j = low; j <= high - 1; j++)
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
