#include "main.h"

/**
  * _strlen_recursion - Entry point
  * Description - 'a function that returns the length of a string recursively'
  * @s: string to be used
  * Return: length of s
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
