#include "main.h"
/**
 *swap_int - swap the value of two
 *@a: input a
 *@b: input b
 *
 *Return: b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
