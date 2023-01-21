#include "main.h"
/**
* _strpbrk - Search a string for any of set of bytes
* @s: The string to be searched
* @accept: the set of bytes to be searched for
* Return: if a set isd matched - pointer to the matched byte
*	if no set is muted - NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
