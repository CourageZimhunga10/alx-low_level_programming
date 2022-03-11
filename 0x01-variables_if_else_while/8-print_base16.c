#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints  all the numbers of base 16 
 * in lowercase. Prints alphabets from the ANSI
 * character set.
 * Return: Always 0
 */
int main(void)
{
    int ansi_number;
    int tracker;

    ansi_number = 48;
    tracker = 0;

    while (tracker < 16)
    {
        if(tracker > 9)
            putchar(49);


        if(tracker == 10)
            ansi_number = 48;

        putchar(ansi_number);

        ansi_number++;
        tracker++;
    }

    putchar('\n');
    return (0);
}
