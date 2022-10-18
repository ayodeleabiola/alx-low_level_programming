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
	int n, m;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, m);
	if (m == 0)
		printf("%s %d is %d and is 0\n", str, n, m);
	if (m < 6 && m != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, m);
	return (0);
}
