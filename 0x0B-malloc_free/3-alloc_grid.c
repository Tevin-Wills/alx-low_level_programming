#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimention array
 *
 * @width: array width
 * @height: array height
 *
 * Return: pointer to array int...
 */
int **alloc_grid(int width, int height)
{
	int k, z;
	int **ans;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ans = malloc(height * sizeof(int *));
	if (ans == NULL)
	{
		free(ans);
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		ans[k] = malloc(width * sizeof(int));
		if (ans[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(ans[1]);
			free(ans);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
		for (z = 0; z < width; z++)
			ans[k][z] = 0;
	return (ans);

}
