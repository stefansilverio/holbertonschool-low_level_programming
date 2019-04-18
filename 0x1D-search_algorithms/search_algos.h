#ifndef __SEARCH__
#define __SEARCH__

#include <stdio.h>

int jump_search(int *array, size_t size, int value);
int _search(int *array, short jump, int size, int hi, int low, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _split(int *array, size_t hi, size_t low, int value);

#endif
