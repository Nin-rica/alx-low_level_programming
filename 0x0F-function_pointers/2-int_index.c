#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: array to be searched
 * @size: number of elements in the araay
 * @cmp: function used to compare values
 * Return: -1 or the index of the first element that matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
