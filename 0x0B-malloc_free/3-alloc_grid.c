#include "main.h"
#include <stdlib.h>
/**
  * **alloc_grid - return a pointer to a 2 dimensional array
  * @width: width input
  * @height: height input
  * Return: pointer to 2 dimensional arr
  */
int **alloc_grid(int width, int height)
{
	int k, n;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		ar[k] = malloc(width * sizeof(int));
		if (ar[k] == NULL)
		{
			for (n = 0; n < k;  n++)
				free(ar[n]);
			free(ar);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			ar[k][n] = 0;
		}
	}
	return (ar);
}
