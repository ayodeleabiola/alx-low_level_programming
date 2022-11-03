#include "main.h"
/**
 *is_palindrome - return if the given string is palindrome
 *@s: string to chek
 *Return: true if the given string is a palindrone
 */
int is_palindrome(char *s)
{
	int index = 0;
	int length = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, length, index));
}
/**
 *find_strlen - Returns the length of a string
 *@s: Sturng to be measured
 *
 *Return: The length of the string
 */
int find_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlen(s + length);
	}
	return (length);
}
/**
 *check_palindrome - check if a string id palindrome
 *@s: The string to be check
 *@len: The length of s
 *@index: The index of the string to be checked
 *
 *Return: If the string is palindrome -1
 *	If the string is not palindrome -0
 */
int check_palindrome(char *s, int len, int index)
{

	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
