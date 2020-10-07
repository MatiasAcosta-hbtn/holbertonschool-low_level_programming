#include "holberton.h"

/**
 * _strlen_recursion - sum the length of a string
 * @s: the string
 * Return: the lenght of a string
 */

int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s != 0)
	{
		cont += 1 + _strlen_recursion(s + 1);
	}
	else
		return (0);
	return (cont);
}

/**
 * aux - auxiliar function
 * @s: the string
 * @len: the lenght of a string
 * @count: the count
 * Return: the 1 or 0
 */

int aux(char *s, int len, int count)
{

	if (count < len && s[len] == s[count])
		return (aux(s, len - 1, count + 1));
	if (count >= len)
		return (1);
	return (0);
}
/**
 * is_palindrome - return 0 or 1 if is a palindrome
 * @s: the string
 * Return: 1 or 0 is the string is a palindrome
 */
int is_palindrome(char *s)
{
	int count = 0;
	int len;

	len = _strlen_recursion(s);
	return (aux(s, len - 1, count));

}
