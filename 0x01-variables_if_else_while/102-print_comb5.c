#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'print possible combination of two two-digits numbers'
  *Return: always 0 (sucess)
  */
int main(void)
{
	int h, q;

	for (h = 0; h <= 98; h++)
	{

	for (q = h + 1; q <= 99; q++)
	{
	putchar((h / 10) + '0');
	putchar((h % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
	if (h == 98 && q == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
