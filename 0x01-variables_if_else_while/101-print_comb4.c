#include <stdio.h>
/**
 * main - always the starting point
 *
 * Return: Always 0
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 8; dig1++)
	{
		for (dig2 = dit1 + 1; dig2 < 9; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				if (dig1 == 7 && dig2 == 8 && dig3 == 9)
				{
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
