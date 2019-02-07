#include <stdlib.h>
#include <stdio.h>

int main()
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);
	printf("%lu\n", n);
	return(0);
}
