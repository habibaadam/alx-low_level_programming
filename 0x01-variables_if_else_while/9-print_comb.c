#include <stdio.h>

/**
 * main - Entry point
 * Description - 'print all single digit numbers with commas'
 * Return: always 0 (sucess)
 */

int main(void)
{
	int h;

	for (h = 48; h <= 57; h++)
	{
		putchar(h);
		if (h == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
