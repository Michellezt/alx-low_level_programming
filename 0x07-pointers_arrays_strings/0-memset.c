#include "main.h"

/**
  * *_memset - function that fills memory with constant byte
  * @s: pointer to the block of memory
  * @b: value to be set
  * @n: number of bytes to be set the value
  * Return: area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
