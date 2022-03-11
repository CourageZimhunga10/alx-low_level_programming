#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * and uppercase followed by a new line. Prints alphabets from
 * the ANSI character set.
 * Return: Always 0
 */
int main(void)
{
    int ansi_number_lowercase;
    int ansi_number_uppercase;

    ansi_number_lowercase = 97;
    ansi_number_uppercase = 65;

    while (ansi_number_lowercase < 123)
    {
        putchar(ansi_number_lowercase);
        ansi_number_lowercase++;
    }

    while (ansi_number_uppercase < 91)
    {
        putchar(ansi_number_uppercase);
        ansi_number_uppercase++;
    }

    putchar('\n');
    return (0);
}
