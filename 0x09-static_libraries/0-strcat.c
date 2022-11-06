#include "main.h"
/**
 *_strcat - a function that concatenates two strings
 *@dest: copy to
 *@src: copy from
 *Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int index, num;

	while (dest[index++])
	{
		num++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[num++] = src[index];
	}
	return (dest);
}
