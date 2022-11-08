#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - Returns a pointer to a 2-dimensional array of
 *	integers with each element initalized to 0.
 *@width: The width of the 2-dimensional array.
 *@height: The height of the 2-dimensional array.
 *
 *Return: If width <= 0, height <= 0, or the function fails - NULL.
 */
int **alloc_grid(int width, int height)
{
	int **twoM;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoM = malloc(sizeof(int *) * height);
	if (twoM == NULL)
		return (NULL);
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoM[hgt_index] = malloc(sizeof(int) * width);
		if (twoM[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoM[hgt_index]);
			free(twoM);
			return (NULL);
		}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoM[hgt_index][wid_index] = 0;
	}
	return (twoM);
}
