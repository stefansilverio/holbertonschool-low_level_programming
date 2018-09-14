#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);

			if (x != '9' || y != '9')
			{
				putchar(44);
				putchar(32);
			}

		}
	}
		putchar('\n');
		return (0);
}
