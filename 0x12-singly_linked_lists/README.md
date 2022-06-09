# :book: 0x12. C - Singly linked lists
A dynamic linear data structure in which data objects called nodes are linked using references/ pointer/ address. Each node stores a data and a reference to the next node. The first node is called a Head which in an empty list and has a null reference. The last node has a null reference always. Data may be stored in different part of memory. The size/ number of nodes can grow or shrink.

![Linked list Data Structure](https://cdn.programiz.com/sites/tutorial2program/files/linked-list-concept.png)
_Linked list Data Structure_

# :computer: Tasks
##  0-print_list.c
Write a function that prints all the elements of a list_t list.
 - Prototype: size_t print_list(const list_t *h);
 - Return: the number of nodes
 - Format: see example
 - If str is NULL, print [0] (nil)
 - You are allowed to use printf

 ```
 julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
 ```

 > betty 0-print_list.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a; ./a


 ## 1-list_len.c
 Write a function that returns the number of elements in a linked list_t list.
 - Prototype: size_t list_len(const list_t *h);

 ```
 julien@ubuntu:~/0x12. Singly linked lists$ cat 1-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
```

 > betty 1-list_len.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b; ./b

 ## 2-add_node.c
 Write a function that adds a new node at the beginning of a list_t list.
 - Prototype: list_t *add_node(list_t **head, const char *str);
 - Return: the address of the new element, or NULL if it failed
 - str needs to be duplicated
 - You are allowed to use strdup

 ## 3-add_node_end.c
 Write a function that adds a new node at the end of a list_t list.
 - Prototype: list_t *add_node_end(list_t **head, const char *str);
 - Return: the address of the new element, or NULL if it failed
 - str needs to be duplicated
 - You are allowed to use strdup

 ## 4-free_list.c
 Write a function that frees a list_t list.
 - Prototype: void free_list(list_t *head);

 ## 100-first.c
 Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
 - You are allowed to use the printf function

 ## 101-hello_holberton.asm
 Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
 - You are only allowed to use the printf function
 - You are not allowed to use interrupts
 - Your program will be compiled using nasm and gcc:








