#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Exit code)
 */

int main(void)
{
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    
    int i = 0;
    
    while (message[i] != '\0')
    {
	    write(2, &message[i], 1);
	    i++;
    }
    return (1);
}
