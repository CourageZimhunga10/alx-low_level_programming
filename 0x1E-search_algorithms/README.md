# :book: 0x1E. C - Search Algorithms
A search algorithm is An algorithm designed to solve a search problem i.e retrieve info within a data structure.

## Types of search algorithms.
1.	Linear search algorithm.
2.	Binary search algorithm.
3.	Hashing search algorithm.

## Linear Search Algorithms.
Check every record for the one associated with a target key in a linear fashion.


## Commands
Create header file
```bash
touch search_algos.h
chmod +x search_algos.h
betty search_algos.h
```

# :computer: Tasks
## :computer_mouse: [0. Linear search ](0-linear.c)
Write a function that searches for a value in an array of integers using the Linear search algorithm.

### Commands
```bash
touch 0-linear.c
chmod +x 0-linear.c
betty 0-linear.c

# Test
chmod +x tests/0-main.c

betty 0-linear.c; betty search_algos.h; gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/0-main.c 0-linear.c -o 0-linear; ./0-linear 
```

# Referenceces
1. [Search algorithm Wikipedia](https://en.wikipedia.org/wiki/Search_algorithm)
