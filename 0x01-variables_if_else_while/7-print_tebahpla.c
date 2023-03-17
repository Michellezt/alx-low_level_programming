#include <stdio.h>

/**
  * main - starting point
  *
  * Return: 0 always
  */

int main(void)
{
	char m;

	for (m = 'z' ; m >= 'a' ; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
