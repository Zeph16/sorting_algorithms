#include "sort.h"
/**
 * bubble_sort - bubble sorting algorithm in ascending order
 * @array: input array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp, swap;

	if (array == NULL || size < 2)
		return;

	for (n = size, swap = 1; n > 0 && swap; n--)
	{
		swap = 0;
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
