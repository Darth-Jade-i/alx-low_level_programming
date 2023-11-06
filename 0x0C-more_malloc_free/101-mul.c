#include "main.h"
#include <stdlib.h>

/**
 * check_digit - check if all elements of
 * an array are digits
 * @s: the array to be checked
 *
 * Return: 0 if the elements are all digits
 *	   1 if otherwise
 */
int check_digit(char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (-1);
	}

	return (0);
}
/**
 * _atoi - convert a string to an integer
 * @s: the string
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	unsigned int i, number = 0;

	for (i = 0; s[i]; i++)
		number = number * 10 + (s[i] - '0');

	return (number);
}
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(unsigned int n)
{
	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
/**
 * main - multiply 2 positive numbers
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int a = 0, b = 0;
	unsigned int num1, num2, mul;

	if (ac == 3)
	{
		a = check_digit(av[1]);
		b = check_digit(av[2]);
	}
	if (ac != 3 || a != 0 || b != 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	num1 = _atoi(av[1]);
	num2 = _atoi(av[2]);
	mul = num1 * num2;

	print_number(mul);
	_putchar('\n');

	return (0);
}
