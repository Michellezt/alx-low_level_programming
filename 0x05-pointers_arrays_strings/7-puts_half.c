#include "main.h"
/**
  * puts_half - function that prints half of a string
  * if odd len, k = (length_of_the_string - 1) / 2
  * @str: input
  * Return: half of input
  */
void puts_half(char *str)
{
	int i, k, longi;

	longi = 0;

	for (i = 0; str[i] != '\0'; i++)
		longi++;

	k = (longi / 2);

	if ((longi % 2) == 1)
	k = ((longi + 1) / 2);

	for (i = k; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
