#include <stdlib.h>
#include <stdio.h>

/* proves arrays in c are null terminated */
/*
int main()
{
	int i = 0;
	int arr[] = {1, 2, 3, 4};

	while (arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return(0);
}
*/

/* you can use array syntax to increment a ptr */
int main()
{
	int arr[] = {1, 2, 3, 4};
	int *arr_ptr = arr;
	int i = 0;

	printf("%p\n", arr);
	printf("%p\n", arr_ptr + 1);

	while (arr_ptr[i])
	{
		printf("%d\n", arr_ptr[i]);
		i++;
	}
	return(0);
}
