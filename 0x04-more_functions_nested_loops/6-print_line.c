#include "main.h"
 /**
 *print_line - a function that draws a straight line in the terminal
 *@c: input number of times to print '_'
 *Return:  a straight line
 *
 */
void print_line(int c)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
		for (c = 0; c <= n; c++)
			_putchar('-');
		_putchar('\n');
}	
