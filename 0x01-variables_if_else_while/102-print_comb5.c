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
	int l, h;

	for (l = 0; h <= 98; l++)
	{

	for (h = l + 1; h <= 99; h++)
	{
	putchar((l / 10) + '0');
	putchar((l % 10) + '0');
	putchar(' ');
	putchar((h / 10) + '0');
	putchar((h % 10) + '0');
	if (l == 98 && h == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
