#include "main.h"

/**
  * *_strchr -  function that locates character in string
  * @s: string to be scanned
  * @c: character to be searched
  * Return: pointer of the character c
  * NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] != c)
			return (&s[i]);
	}
	return (0);
}
