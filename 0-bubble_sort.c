#include "sort.h"
/**
 * bubble_sort - sort
 * @array: array
 * @size: size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, tmp = 0;
	bool swap = true;

	if (size < 2)
		return;
	i = size;
	while (swap)
	{
		swap = false;
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				swap = true;
				print_array(array, size);
			}
		}
		i--;
	}
}
