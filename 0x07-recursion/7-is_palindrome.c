#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * _palindrome - helper function for is_palindrome
 * @str: input string
 * @s: start index
 * @e: end index
 * Return: 1 if true, 0 if false
 */
int _palindrome(char *str, int s, int e)
{
	if (s == e)
	{
		return (1);
	}

	if (str[s] != str[e])
	{
		return (0);
	}

	if (s < e)
	{
		return (_palindrome(str, s + 1, e - 1));
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input string
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int len = (_strlen_recursion(s) - 1);

	return (_palindrome(s, 0, len));
}
