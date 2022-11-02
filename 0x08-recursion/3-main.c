#include "main.h"
#include <stdio.h>
/**
 *main - check code for alx student
 *
 *Return Alwways 0
 */
int amin(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
