#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * ABS - absolute value
 *
 * @x: number to take abs value of
 *
 * Return: Always 0
 */
int ABS(int x)
{
	if (x < 0)
		x *= (-1);

	return (x);
}

#endif
