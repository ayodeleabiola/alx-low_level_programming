#include "main.h"
#include <stdio.h>
/**
 *main - check code for alx students
 *Return: Always 0
 */
int main(void)
{
	char s[10] = "Holberton";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
