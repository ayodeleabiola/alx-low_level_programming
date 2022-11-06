#include "main.h"
/**
 *_strlen - returns the lenth of a
 *@s: String
 *
 *Return: returns length
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}
	return (inc);
}	
