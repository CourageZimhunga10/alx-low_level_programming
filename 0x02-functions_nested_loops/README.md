# Functions, nested loops
Concepts covered; 
- Function. A block of code/ group of statements that performs a task.
- Function prototype. A declaration of a function that specifies the function’s name and type signature (parameters and return types).
- Nested loops. A loop inside another loop i.e. a child loop.
- Scope in programming is the part of code a enttiy can be referenced or manipulated.
- Header files. a file that contains C function declarations and macro definitions to be shared between several source files.

gcc flags meaning;
- Wall, enables all the warnings about constructions.
- Werror, make all warnings into errors.
- Wextra, enables some extra warning flags that are not enabled by -Wall. 
- pedantic, Issue all the warnings demanded by strict ISO C and ISO C++.
- std=gnu89, set the language standard to gnu89 a GNU dialect of ISO C90.

## # Tasks :computer:
## 0-putchar.c
Write a program that prints _putchar, followed by a new line.
 - The program should return 0

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar; ./0-putchar

## 1-alphabet.c
Write a function that prints the alphabet, in lowercase, followed by a new line.
 - Prototype: void print_alphabet(void);
 - You can only use _putchar twice in your code

 > gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet; ./1-alphabet

## 2-print_alphabet_x10.c
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 - Prototype: void print_alphabet_x10(void);
 - You can only use _putchar twice in your code

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10; ./2-alphabet_x10

## 3-islower.c
Write a function that checks for lowercase character.
 - Prototype: int _islower(int c);
 - Returns 1 if c is lowercase
 - Returns 0 otherwise

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower; ./3-islower
 
## 4-isalpha.c
Write a function that checks for alphabetic character.
 - Prototype: int _isalpha(int c);
 - Returns 1 if c is a letter, lowercase or uppercase
 - Returns 0 otherwise

 > gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha; ./4-isalpha

## 5-sign.c
Write a function that prints the sign of a number.
 - Prototype: int print_sign(int n);
 - Returns 1 and prints + if n is greater than zero
 - Returns 0 and prints 0 if n is zero
 - Returns -1 and prints - if n is less than zero

 > gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign; ./5-sign

## 6-abs.c
Write a function that computes the absolute value of an integer.
 - Prototype: int _abs(int);

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs; ./6-abs

## 7-print_last_digit.c
Write a function that prints the last digit of a number.
 - Prototype: int print_last_digit(int);
 - Returns the value of the last digit

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit; ./7-last_digit

## 8-24_hours.c
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 - Prototype: void jack_bauer(void);
 - You can listen to this soundtrack while coding :)

> betty 8-24_hours.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24; ./8-24 ;

## 9-times_table.c
Write a function that prints the 9 times table, starting with 0.
 - Prototype: void times_table(void); 

> betty 9-times_table.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table; ./9-times_table 

## 10-add.c
Write a function that adds two integers and returns the result.
 - Prototype: int add(int, int);

> betty 10-add.c;gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add; ./10-add

## 11-print_to_98.c
Write a function that prints all natural numbers from n to 98, followed by a new line.
 - Prototype: void print_to_98(int n);
 - Numbers must be separated by a comma, followed by a space
 - Numbers should be printed in order
 - The first printed number should be the number passed to your function
 - The last printed number should be 98
 - You are allowed to use the standard library

 > betty 11-print_to_98.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98; ./11-98 

## 100-times_table.c
Write a function that prints the n times table, starting with 0.
 - Prototype: void print_times_table(int n);
 - If n is greater than 15 or less than 0 the function should not print anything
 - Format: see example

> betty 100-times_table.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table; ./100-times_table 

## 101-natural.c
 Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

> betty 101-natural.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural; ./101-natural

## 102-fibonacci.c
Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 - The numbers must be separated by comma, followed by a space , 
 - You are allowed to use the standard library

> betty 102-fibonacci.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci; ./102-fibonacci

## 103-fibonacci.c
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

> betty 103-fibonacci.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 103-fibonacci; ./103-fibonacci

## 104-fibonacci.c
Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 - The numbers should be separated by comma, followed by a space ,
 - You are allowed to use the standard library
 - You are not allowed to use any other library (You can’t use GMP etc…)
 - You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
 - You are not allowed to hard code any Fibonacci number (except for 1 and 2)

 > betty 104-fibonacci.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci; ./104-fibonacci

## References
1. [ANSI character set](http://www.alanwood.net/demos/ansi.html])

   
