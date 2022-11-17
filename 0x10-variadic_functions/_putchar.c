#include <unistd.h>

/**
 *_putchar - function that print stdout
 *
 *Return: return 1 if positive ,else return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
