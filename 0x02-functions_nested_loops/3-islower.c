#include "holberton.h"

int _islower(int c)
{
	if (('a' < c) && ('z' > c))
		return (1);
	else 
		return (0);
}
	
