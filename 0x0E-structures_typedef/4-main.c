#include <stdio.h>
/**
 *main - check code for Alx student
 *
 *Return: Always 0
 */
int main(void)
{
dog_t *my_dog;

my_dog = new_dog("Django", 3.5, "Jay");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
return (0);