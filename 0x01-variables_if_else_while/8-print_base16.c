#include <stdio.h>

/**
  * main - starting point
  *
  * Return: 0 always
  */

int main(void)
{
	int m;
	char k;

	for (m = 0 ; m < 10 ; m++)
		putchar(m + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
