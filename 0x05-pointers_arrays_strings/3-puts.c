#include "main.h"
/**
 *_puts - A fuhat print a string
 *@str: prints string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
