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
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';
	return (cpy);
}
