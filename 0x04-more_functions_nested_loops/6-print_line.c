#include "main.h"
/**
 *print_line - draw a line using charcter
 *@num: character to be printed
 */
void print_line(int num)
{
	int len;

	if (num > 0)
	{
		for (len = 0; len < num; len++)
			_putchar('-');
	}
	_putchar('\n');
}

