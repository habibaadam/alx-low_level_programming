#include "main.h"

/**
  * rev_string - Entry point
  * Description - 'printing a string in reverse, but in halves'
  * @s: string to be reversed
  * Return: void
  */

void rev_string(char *s)
{
	int length, h, half;
	char tmpo;

	for (length = 0; s[length] != '\0'; length++)
	{
		h = 0;
		half = length / 2;
	}
	while (half--)
	{
		tmpo = s[length - h - 1];
		s[length - h - 1] = s[h];
		s[h] = tmpo;
		h++;
	}
}
