#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block
 *@ptr: pointer to the memory previously allocated with a call to malloc
 *@old_size: size of ptr
 *@new_size: size of the new memory to be allocated
 *
 *Return: pointer to the address of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block;
	char *ptr_copy, *fill;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		block = malloc(new_size);
		if (block == NULL)
			return (NULL);
		return (block);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	block = malloc(sizeof(*ptr_copy) * new_size);
	if (block == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fill = block;
	for (index = 0; index < old_size && index < new_size; index++)
		fill[index] = *ptr_copy++;
	free(ptr);
	return (block);
}
