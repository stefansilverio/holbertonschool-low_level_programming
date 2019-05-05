#ifndef __SEARCH__
#define __SEARCH__

#include <stdio.h>

int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int _search(int *array, size_t jump, size_t size, size_t hi, size_t low,
	    int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _split(int *array, int hi, int low, int value);

#endif
