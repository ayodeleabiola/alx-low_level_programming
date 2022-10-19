#include "main.h"
/**
 * main - check alx student's code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(10);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
