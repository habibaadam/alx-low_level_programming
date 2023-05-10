#include "main.h"

/**
  * _print_rev_recursion - Entry point
  * Description - 'a function that prints a string in reverse recursively'
  * @s: string to be treated
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
