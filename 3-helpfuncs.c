#include <stdio.h>
#include "sort.h"

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int lomuto(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}

	swap(&array[i + 1], &array[high]);

	return i + 1;
}

void quick_sort_help(int *array, int low, int high)
{
	if (low < high)
	{
		int part_index = lomuto(array, low, high);
		quick_sort_help(array, low, part_index - 1);
		quick_sort_help(array, part_index + 1, high);
	}
}
