#include "main.h"
/**
 *puts2 - A function that print every other character of a string
 *@str: prints every character of a string
 *Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
