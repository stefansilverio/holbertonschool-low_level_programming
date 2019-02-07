#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int *barrier = array;
	int idx = 0, mindex = 0, min_val = 0;
	unsigned int tmp = 0;

	while (size > tmp)
	{
		min_val = barrier[idx]; /* new minimum value */
		tmp = idx; /* save position of barrier */

		while (barrier[idx]) /* find next number to move */
		{
			if (min_val > barrier[idx]) /* search for # greater min */
				mindex = idx; /* save position of new minimum */
			idx++;
		}
		_switch(array, mindex, tmp);
		print_array(array, size);
		tmp++; /* increment barrier */
		idx = tmp; /* reset barrier position */
	}
}

void _switch(int *array, int mindex, int old_min)
{
	int tmp = array[old_min];

	array[old_min] = array[mindex];
	array[mindex] = tmp;
}
