#include "main.h"

/**
  * *_strncat - function that concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: number of characters to append
  * Return: destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int k;

	for (k = 0 ; dest[k] != '\0' ; k++)
		destlen++;
	for (k = 0 ; src[k] != '\0' ; k++)
		srclen++;
	for (k = 0 ; k < n ; k++)
		dest[destlen + k] = src[k];
	return (dest);
}
