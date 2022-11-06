#include "main.h"
/**
 *_strncpy - Entry point
 *@dest: copy to
 *@src: copy from
 *@n: input number of char
 *Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		if (index < n)
		{
			dest[index] = src[index];
		}
		while (index < n)
		{
			dest[index++] = '\0';
		}
	}
	return (dest);
}

