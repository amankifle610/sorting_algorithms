#include "sort.h"
/**
 * bubble_sort - sort
 * @array: array
 * @size: size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, tmp = 0;

	if (size < 2)
		return;
	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
