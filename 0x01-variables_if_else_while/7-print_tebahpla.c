#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * followed by a new line in reverse. Prints alphabets from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
int ansi_number;
ansi_number = 122;
while (ansi_number > 96)
{
putchar(ansi_number);
ansi_number--;
}

putchar('\n');
return (0);
}
