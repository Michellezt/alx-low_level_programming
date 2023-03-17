#include <stdio.h>

/**
  * main - starting point
  *
  * Return: 0 always
  */

int main(void)
{
	int m;
	int k;

	for (m = 0 ; m < 10 ; m++)
	{
		for (k = 1 ; k < 10 ; k++)
		{
			if (m < k && m != k)
			{
				putchar(m + '0');
				putchar(k + '0');
				if (m + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
