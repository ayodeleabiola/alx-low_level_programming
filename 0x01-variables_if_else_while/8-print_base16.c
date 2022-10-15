#include <stdio.h>
/**
 * main - Always the starting point
 *
 * Return: Not ALWAYS 0
 */
int main(void)
{
	int numb;
	char lets;

	for (numb = 0; numb < 10; numb++)
	{
		putchar((numb % 10) + '0');
	}
	for (lets = 'a'; lets <= 'f'; lets++)
	{
		putchar(lets);
	}
	putchar('\n');
	return (0);
}
