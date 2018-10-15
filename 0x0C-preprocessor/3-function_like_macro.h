#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * ABS - absolute value
 *
 * @num: number to take abs value of
 *
 * Return: Always 0
 */
int ABS(int num)
{
	if (num < 0)
		num *= (-1);

	return (num);
}

#endif
