#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true lese -1
 * @array: target array
 * @size: size of array elements
 * @cmp: pointer to func of one of 3 main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
