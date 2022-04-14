# Variadic functions
A **variadic function** is one which accepts a **variable number of arguments** which is achieved in C language using the header library **stdarg.h**

## Example print first two unmaed parameters passed to a variadic function
```
	#include <stdio.h>

	/*Add variadic library*/
	#include <stdarg.h>

	/*Declare a variadic function - Function prototype*/
	void print_integers_parameters(int i, ...);

	/*Define the variadic function - Function head and body*/
	void print_integers_arguments(int num1, ...)
	{
		/* Variable to hold all parameters*/
		va_list parameters;

		/* Macro function to access the parameters*/
		va_start(parameters, num1);
		/* Access first unnamed parameter*/
		printf("parameter: %d\n", va_arg(parameters, int));

		/* Access second unnamed parameter*/
		printf("parameter: %d\n", va_arg(parameters, int));
		va_end(parameters);/*end parameter access*/
	}

	int main(void)
	{
		print_integers_arguments(167, -13, 90);
	}
```

# const keyword
Used to define variables whose value cannot be changed/ updated/ reassigned.

```
	const variable = value;
```
 - 
# Tasks
## 0-sum_them_all.c
Write a function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
 - If n == 0, return 0

## 1-print_numbers.c
Write a function that prints numbers, followed by a new line.
 - Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
 - where separator is the string to be printed between numbers
 - and n is the number of integers passed to the function
 - You are allowed to use printf
 - If separator is NULL, don’t print it
 - Print a new line at the end of your function

 ## 


