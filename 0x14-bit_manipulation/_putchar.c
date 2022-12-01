#include <unistd.h>

/**
 *_putchar - function that print stdout to the screen
 *
 *Return: return true if positive,else return negative
 *
 */
int _putchar( char c)
{
	return (write(1, &c, 1));
}
