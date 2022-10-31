#include "main.h"
/**
 *_memset - Copies @n bytes from the memory area pointed
 *@s: A pointer to the memory area to copy @src into.
 *@b: The source buffer to copy characters from.
 *@n: The number of bytes to copy from @src.
 *
 *Return: A pointer to the destination buffer @dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
