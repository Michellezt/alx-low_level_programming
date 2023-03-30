#include "main.h"

/**
  * *_strncpy - function that copies a string
  * @dest: destination string
  * @src: source string
  * @n: number of strings
  * Return: destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
