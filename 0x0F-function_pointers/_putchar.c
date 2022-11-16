#include <unistd.h>
/**
 *_putchar - Function that print character to stdout
 *@c: character c
 *
 *Return: if positive return 1, else
 *	return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
