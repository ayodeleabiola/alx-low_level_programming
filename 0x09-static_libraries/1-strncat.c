#include "main.h"
/**
 *_strncat - a function that concatenates two strings
 *@dest: copy to
 *@src: copy from
 *@n: input of max bytes to be used
 *Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, dest_length;

	index = 0, dest_length = 0;
	while (dest[index++])
	{
		dest_length++;
	}
	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];
	return (dest);
}
