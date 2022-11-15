#include <unistd.h>
/**
 *-putchar - function that prints character to stdout
 *@c: The character to be printed
 *
 *Return: on succes 1, on error, -1 is retuen
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
