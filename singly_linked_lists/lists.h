#ifndef LIST
#define LIST
#include <stdio.h>
#include <stddef.h>
/**
 *struct list_s - singly linked list
 *@str: string
 *@len: lenght of the string
 *@next: points to next node
 *
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif

