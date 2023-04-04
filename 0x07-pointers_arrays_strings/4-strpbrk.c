#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: to be scanned
  * @accept: containing the characters to match
  * Return: returns a pointer to the character in s that matches
  * one of the characters in accept or NULL if no such character is found
  */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			return (s);
		}
		s++;
	}

	return ('\0');
}
