#include <stdio.h>
#include <unistd.h>
/**
 * main - Is always an entry point
 *
 * Return: is 1
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 10);
	return (1);
}
