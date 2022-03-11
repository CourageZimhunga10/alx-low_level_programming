#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints all possible combinations
 * of single-digit numbers from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
int num;

num = 48;

while (num < 58)
{
putchar(num);

if (num < 57)
{
putchar(44);
putchar(32);
}
num++;
}

putchar('\n');
return (0);
}
