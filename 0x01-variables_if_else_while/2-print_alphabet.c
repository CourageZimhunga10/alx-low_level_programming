#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * followed by a new line. Prints alphabets from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
    int ansi_number;
    ansi_number = 97;
    while (ansi_number <= 122)
    {
        putchar(ansi_number);
        ansi_number++;
    }

    putchar('\n');
    return (0);
}
