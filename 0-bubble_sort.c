#include "sort.h"
/**
 * bubble_sort - sort
 * @array: array
 * @size: size
*/
void bubble_sort(int *array, size_t size)
{
	int i = 0, j = 0, tmp;

	if (size < 2)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j- 1] > array[j])
			{
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
