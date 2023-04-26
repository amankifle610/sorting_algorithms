#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
/**
 * struct listint_s - double linked list
 * @n: no
 * @prev: prev
 * @next: next
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}listint_t;
void bubble_sort(int *array, size_t size);
void print_rray(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *list);
#endif
