#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
