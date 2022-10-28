#include "main.h"
/**
 *cap_string - A function that capitalize all words of a string
 *@str: input
 *Return: return a pointer to the change string
 */
char *cap_string(char *str)
{
	int i, x;

	int cap = 32;
	int seperator[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= cap;
			}
			cap = 0;
			for (x = 0; x <= 12; x++)
			{
				if (str[i] == seperator[i])
				{
					x = 12;
					cap = 32;
				}
			}
		}
		return (str);
}
