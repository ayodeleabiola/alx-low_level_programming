#include "main.h"
/**
 *print_diagonal -  A function that prints diagonal
 *
 * @num: The number of \ characters to be printed.
 */
void print_diagonal(int num)
{
	 int len, space;

	if (num <= 0)
		_putchar('\n');
	for (len = 0; len < num; len++)
	{
		for (space = 0; space < len; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
