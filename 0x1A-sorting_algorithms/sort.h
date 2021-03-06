#ifndef __SORT__
#define __SORT__

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int check_list(listint_t *list);
void selection_sort(int *array, size_t size);
void _swap(listint_t *bigger, listint_t *smaller, listint_t **head);
void _switch(int *array, int mindex, int old_min);
int partition(int *array, int lo, int hi, size_t size);
void _qsort(int *array, int lo, int hi, size_t size);
void cocktail_sort_list(listint_t **list);
void _swap(listint_t *bigger, listint_t *smaller, listint_t **head);
void _el_swapo(listint_t *bigger, listint_t *smaller, listint_t **head);
void counting_sort(int *array, size_t size);
#endif
