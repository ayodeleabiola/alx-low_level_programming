#include "main.h"
#include <unistd.h>
/**
 *_putchar - Function taht prints character
 *@c: stdout charater
 *
 *Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
