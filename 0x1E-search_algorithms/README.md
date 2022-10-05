# :book: 0x1E. C - Search Algorithms
A search algorithm is An algorithm designed to solve a search problem i.e retrieve info within a data structure.

## Types of search algorithms.
1.	Linear search algorithm.
2.	Binary search algorithm.
3.	Hashing search algorithm.

## Linear Search Algorithms.
Check every record for the one associated with a target key in a linear fashion.

## Binary search algorithm.
Binary Search is a searching algorithm for finding an element's position in a sorted array, the element is always searched in the middle of a portion of an array.

## Commands
Create header file
```bash
touch search_algos.h
chmod +x search_algos.h
betty search_algos.h
PS1="> "
```

# :computer: Tasks
## :computer_mouse: [0. Linear search](0-linear.c)
Write a function that searches for a value in an array of integers using the Linear search algorithm.

### Commands
```bash
touch 0-linear.c; chmod +x 0-linear.c

# Test
chmod +x tests/0-main.c

betty 0-linear.c; betty search_algos.h; gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/0-main.c 0-linear.c -o 0-linear; ./0-linear 
```

## :computer_mouse: [1. Binary search](1-binary.c)
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

### Commands
```bash
touch 1-binary.c; chmod +x 1-binary.c

# Test
chmod +x tests/1-main.c 

betty 1-binary.c; betty search_algos.h; gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/1-main.c  1-binary.c -o 1-binary; ./1-binary
```
# Referenceces
1. [Search algorithm Wikipedia](https://en.wikipedia.org/wiki/Search_algorithm)
1. [Binary search algorithm Wikipedia](https://en.wikipedia.org/wiki/Binary_search_algorithm)
