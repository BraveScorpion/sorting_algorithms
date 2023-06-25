#include "sort.h"

/*
 * bubble_sort- sorts an array in ascending order
 * @array: array to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size == 0 || size == 1 || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			printf("%d", array[j]);
			if ((j + 1) != (size - 1))
				printf(", ");
		}
		printf("\n");
	}
}
