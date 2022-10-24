#include "stdio.h"
#include <stdio.h>
/**
 *main - check code for alx students
 *
 *Return: o
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
