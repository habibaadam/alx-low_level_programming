#include <stdio.h>

/**
 * main - Entry point
 * Description -'print all alphabets in lowercase  except e and q'
 * Return: always 0 (sucess)
 */

int main(void)
{
	int h = 97;

	while (h <= 122)
	{
		if (h == 101 || h == 113)
		{
			h++;
			continue;
		}
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
