#include <stdio.h>
/**
 * main -Program that prints all single digit numbers of base 10
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int num = '/';

	/*  Loop from 48 to 57 in ANSI character set*/
	while (num++ < '9')
		putchar(num);

	putchar('\n');
	return (0);
}
