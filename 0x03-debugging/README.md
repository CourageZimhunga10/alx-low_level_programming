# :book: 0x03. C - Debugging
Concepts covered;
Degugging - The process of finding and resolving bugs.
Bugs - ADefects or problems that prevent correct operation within computer programs, software, or systems.
Debugger - A program that does debugging.

Debugging Techniques;
1. Using printf statements to inspect varaible values, monitor code flow in the console.
2. Logging to see outputs from print statements, compilation warnings, errors in console or files
3. Using a debugger for interactive debugging, using breakpoints to pause code execution and watchers to see variable values.

## :computer: Tasks
## [0-main.c](0-main.c), [main.h](main.h)
In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:

```carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
 -  - int i;

 -  - i = 98;
 -  - positive_or_negative(i);

 -  - return (0);
}
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```

Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.
 - You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
 - You are not allowed to add or remove lines of code, you may change only one line in this task.

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$
```

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main; ./0-main

## 1-main.c
Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

 - Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
 - You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

## 2-largest_number.c
Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
 - Line count will not be checked for this task.

## 3-print_remaining_days.c
Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.

 - Line count will not be checked for this task.
 - You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
 - You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
 
