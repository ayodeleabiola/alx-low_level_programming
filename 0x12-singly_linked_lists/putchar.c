#include "unistd.h"
/**
 *_putchar - function that print character to stdout
 *@c: character to be printed
 *Return: Return 1 if positive, else return -1
 */

int _putchar(char c)
{
	return(write(1, @c, 1));
}
