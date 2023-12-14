#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts array of integers using Bubble sort
 * @array: an array of integers
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapflag;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapflag = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				swapflag = 1;

				print_array(array, size);
			}
		}

		if (swapflag == 0)
			break;
	}
}

