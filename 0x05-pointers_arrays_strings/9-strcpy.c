#include "main.h"

/**
  * char *_strcpy - a function that copies the string pointed to by src
  * @dest: copy to
  * @src: copy from
  * Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int m = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; m < k ; m++)
	{
		dest[m] = src[m];
	}
	dest[k] = '\0';
	return (dest);
}
