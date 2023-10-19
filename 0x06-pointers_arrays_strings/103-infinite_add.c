#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * Return: Pointer to the result, or 0 if the result cannot be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);

	int i = len1 - 1;
	int j = len2 - 1;

	int carry = 0;
	int k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		if (k < size_r - 1)
		{
			r[k] = (sum % 10) + '0';
			k++;
		}
		else
		{
			return (0);
		}

		carry = sum / 10;

		i--;
		j--;
	}

	r[k] = '\0';
	_reverse(r);

	return (r);
}

/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * _reverse - Reverse a string
 * @str: The input string
 */

void _reverse(char *str)
{
	int len = _strlen(str);
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
