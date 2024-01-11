# 0x17. C - Doubly Linked Lists

This repository contains the solutions for the "0x17. C - Doubly Linked Lists" project, which is part of the ALX Low-Level Programming curriculum. The project focuses on understanding and implementing doubly linked lists in C.

## Learning Objectives

- Explain the concept of a doubly linked list
- Use doubly linked lists in C
- Implement various operations (deletion, insertion, etc.) with doubly linked lists
- Find relevant information and resources independently

## Project Details

- All the files in this repository are written in C and will be compiled on Ubuntu 20.04 LTS using Python 3.8.5.
- The code follows the Betty style guide and is formatted accordingly.
- The only allowed C standard library functions are `malloc`, `free`, `printf`, and `exit`.
- Each file should contain no more than 5 functions.
- The prototypes for all functions should be included in the `lists.h` header file, which is provided.
- The main.c files provided in the examples are for testing purposes and should not be pushed to the repository.

## Data Structure

The project uses the following data structure for doubly linked lists:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
