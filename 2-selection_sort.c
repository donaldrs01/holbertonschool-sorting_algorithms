#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - sorts array of integers using selection sort
 * @array: array of integers to be sorted in ascend
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;
	int sortflag;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i; /* assume current index is min */
		sortflag = 1;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
				sortflag = 0;
			/* finds minimum element in unsorted part */
		}
	}

	if (sortflag)
		break;

		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
		/* swaps found min element with first element */

		for (j = 0; j < size - 1; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[size - 1]);
	}
}
