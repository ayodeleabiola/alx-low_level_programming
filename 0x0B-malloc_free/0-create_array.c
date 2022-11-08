#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of character,
 *and intialize it with a specific character
 *@size: size of an array
 *@c: Character to insert
 *Return: NULL if size is zero,if it fails
 *point to an array if normal
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
