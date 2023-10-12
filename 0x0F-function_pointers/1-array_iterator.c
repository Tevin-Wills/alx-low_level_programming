#include "function_pointers.h"
/**
 * array_iterator- iterate through an array
 * @array: target array
 * @size: array size
 * @action: function pointer to array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
