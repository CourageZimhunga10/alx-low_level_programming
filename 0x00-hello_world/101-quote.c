#include <stdio.h>
#include <unistd.h>

/**
  * main - C program that prints a string.
  *
  * Description: Write a C program that prints exactly and that piece of art is
  * useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard
  * error.
  * Return: 0 Always
  */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
