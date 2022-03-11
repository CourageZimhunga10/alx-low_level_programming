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

ansi_number_lowercase = 97;

while (ansi_number_lowercase < 123)
{
if (ansi_number_lowercase == 'e' || ansi_number_lowercase == 'q')
{
ansi_number_lowercase++;
continue;
}
putchar(ansi_number_lowercase);
ansi_number_lowercase++;
}

putchar('\n');
return (0);
}
