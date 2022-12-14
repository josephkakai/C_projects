#ifndef JOSE_H
#define JOSE_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
int _putchar(char c);
#endif
