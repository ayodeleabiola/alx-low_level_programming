#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - must always be an entry point
 *
 * Return: Not everytime 0
 */
int main(void)
{
	int n;
	char str[] = "last digit";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("%s %d is %d and is  0\n", str, n, n % 10);
	}
	else
	{
		printf("%s %d is %d and is 0\n", str, n, n % 10);
	}
	return (0);
}
