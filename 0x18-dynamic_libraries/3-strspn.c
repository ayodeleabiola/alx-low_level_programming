#include "main.h"
/**
* _strspn - Gets the lenght of a prerfix sub string
* @s: The string to be searched
* @accept: The prefix to be meausred
* Return: The number of bytes in s which
*	consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
					break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
