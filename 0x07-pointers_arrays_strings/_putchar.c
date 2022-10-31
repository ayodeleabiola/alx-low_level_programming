#include "main.h"
#include <unistd.h>
/**
 *_putchar - write a function that princ character
 *@c: Character to be return
 *
 *Return: if succes 1 els -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
