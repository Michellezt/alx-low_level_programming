#include "main.h"
/**
  * _strstr - locates a substring
  * @haystack: main C string to be scanned
  * @needle: small string to be searched within haystack
  * Return: returns a pointer to the first occurrence in haystack
  * or a null pointer if the sequence is not present in haystack
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *n = needle;

		while (*k == *n && *n != '\0')
		{
			k++;
			n++;
		}

		if (*n == '\0')
		return (haystack);
	}

	return (0);
}
