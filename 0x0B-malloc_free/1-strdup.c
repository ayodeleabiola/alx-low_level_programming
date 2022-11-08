#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *string given as a parameter.
 *string givern as a parameter
 *@str: String to be copied
 *
 *Return: NULL if error, pointed to allocated space
 */
char *_strdup(char *str)
{
	char *copy;
	int index, length;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		length++;
	copy = malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
	}
	copy[length] = '\0';
	return (copy);
}
