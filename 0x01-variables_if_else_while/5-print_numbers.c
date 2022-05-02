#include <stdio.h>
/**
 * main - Program that prints all single digit numbers of base 10 
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');
	return (0);
}
