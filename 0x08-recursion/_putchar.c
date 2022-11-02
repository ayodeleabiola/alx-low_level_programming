#include "main.h"
#include <unistd.h>
/**
 *_putchar - write the character cto stdout
 *@c: Character to print
 *
 *Return: 1 if positive else -1
 */
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
