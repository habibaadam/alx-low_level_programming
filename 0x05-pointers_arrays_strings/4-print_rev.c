#include "main.h"

/**
  * print_rev - Entry point
  * Description - 'function printing a string in reverse'
  * @s: string to be reversed
  * Return: void
  */

void print_rev(char *s)
{
	int h = 0;

	while (s[h])
	{
		h++;
	}
	while (h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
