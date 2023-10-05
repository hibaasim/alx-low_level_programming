#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid
 * @width: the grid width
 * @height: the grid height
 *
 * Return: pointer to grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if ( width == 0 || height == 0)
		return (NULL);
	p = malloc(sizeof(int *) * width);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
		if (p[i] == NULL)
		{		
			for (i = 0; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
