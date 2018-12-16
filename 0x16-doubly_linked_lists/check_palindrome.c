#include <stdio.h>

int is_palindrome(int n);
int main(void)
{
	int out, in, product = 0, pal = 0, largest = 0;

	for (out = 999; out >= 100; out--)
	{
		for (in = 999; in >= 100; in--)
		{
			product = out * in;
			pal = is_palindrome(product);
			if (pal == 0)
				continue;
			else
			{
				if (pal > largest)
					largest = pal;
			}
		}
	}
	printf("%d\n", largest);
	return (largest);
}

int is_palindrome(int n)
{
	int copy = n;
	int reverse = 0;

	while (copy != 0)
	{
		reverse *= 10; /* build number in reverse */
		reverse += copy % 10;
		copy /= 10; /* shave number off a */
	}
	if (reverse == n) /* if number matches in reverse it is palindrome */
		return (reverse);
	else
		return (0);
}
