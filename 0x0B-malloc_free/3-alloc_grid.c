#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  a function that returns a pointer to a 
 * 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			/** Free previously allocated rows*/
			for (i = 0; i < x; i++)
				free(mee[i]);

			free(mee);
			return (NULL);
		}

		/** Initialize the memory to 0 using calloc*/
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (mee);
}
