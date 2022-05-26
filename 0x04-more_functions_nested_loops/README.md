#  :book:  0x04. C - More functions, more nested loops
Concepts covered;

## Function
Purpose of a function prototype; specifiy the return data type, data types, number and order of arguments passed into a function. If a function is called without a prototype an int will is returned in older C standard versions in newer an error is raised.

## Header file
A file with extension .h that contains C function declarations and macro definitions to be shared between several source files. Included into a c file using the #include preprocessing directive.

# :computer: Tasks
##  [0-isupper.c](0-isupper.c)
Write a function that checks for uppercase character.
 - Prototype: int _isupper(int c);
 - Returns 1 if c is uppercase
 - Returns 0 otherwise

FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

```
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
```
> 
## [1-isdigit.c](1-isdigit.c)
Write a function that checks for a digit (0 through 9).
- Prototype: int _isdigit(int c);
- Returns 1 if c is a digit
- Returns 0 otherwise

## [2-mul.c](2-mul.c)
Write a function that multiplies two integers.

## [3-print_numbers.c](3-print_numbers.c)
Write a function that prints the numbers, from 0 to 9, followed by a new line.

## [4-print_most_numbers.c](4-print_most_numbers.c))
Write a function that prints the numbers, from 0 to 9, followed by a new line.
- Prototype: void print_most_numbers(void);
- Do not print 2 and 4
- You can only use _putchar twice in your code

## [5-more_numbers.c](5-more_numbers.c])
Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
- Prototype: void more_numbers(void);
- You can only use _putchar three times in your code

## [6-print_line.c](6-print_line.c)
Write a function that draws a straight line in the terminal.
- Prototype: void print_line(int n);
- You can only use _putchar function to print
- Where n is the number of times the character _ should be printed
- The line should end with a \n
- If n is 0 or less, the function should only print \n

## [7-print_diagonal.c](7-print_diagonal.c)
Write a function that draws a diagonal line on the terminal.
- Prototype: void print_diagonal(int n);
- You can only use _putchar function to print
- Where n is the number of times the character \ should be printed
- The diagonal should end with a \n
- If n is 0 or less, the function should only print a \n

## [8-print_square.c](8-print_square.c)
Write a function that prints a square, followed by a new line.
- Prototype: void print_square(int size);
- You can only use _putchar function to print
- Where size is the size of the square
- If size is 0 or less, the function should print only a new line
- Use the character # to print the square

## [9-fizz_buzz.c](9-fizz_buzz.c)
Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

## [10-print_triangle.c](10-print_triangle.c)
Write a function that prints a triangle, followed by a new line.
- Prototype: void print_triangle(int size);
- You can only use _putchar function to print
- Where size is the size of the triangle
- If size is 0 or less, the function should print only a new line
- Use the character # to print the triangle

## [100-prime_factor.c](100-prime_factor.c)
Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
- You are allowed to use the standard library
- Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm

## [101-print_number.c](101-print_number.c])
Write a function that prints an integer.
- Prototype: void print_number(int n);
- You can only use _putchar function to print
- You are not allowed to use long
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values

# References
1. [ANSI character set](http://www.alanwood.net/demos/ansi.html])
2. [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm])