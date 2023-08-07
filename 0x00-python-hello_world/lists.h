#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int data;
    struct listint_s *next;
} listint_t;

int check_cycle(listint_t *list);
#endif

