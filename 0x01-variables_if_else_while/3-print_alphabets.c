#include <stdio.h>

/**
  * main - starting point
  *
  * Return: 0 always
  */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		putchar(m);
	for (m = 'A' ; m <= 'Z' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
