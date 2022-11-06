#include "main.h"
#include <unistd.h>
/**
 *_putchar - Function that print character to stdout
 *@c: Character to be printed
 *Return 
 *
 *Return: 1 on succes
 *on error: -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
