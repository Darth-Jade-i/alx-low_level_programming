#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: A simple program that prints text
 * Return: Always 1 (Exit code)
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (int i = 0; message[i] != '\0'; i++)
	{
		putchar(message[i]);
	}
	return (1);
}
