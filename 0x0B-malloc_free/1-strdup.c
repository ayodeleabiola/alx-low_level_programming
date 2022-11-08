#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);
	for (end = 0; end <= *str; end++)
	{

	}
	end += 1;
	array = malloc(sizeof(char) * end);
	for (i = 0; i < end; i++)
		array[i] = str[i];
	if (array == NULL)
		return (NULL);
	return (array);
}
