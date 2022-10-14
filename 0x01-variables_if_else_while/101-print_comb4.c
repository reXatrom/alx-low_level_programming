#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a, l, x;

	for (a = '0'; a <= '9'; a++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				if (a < l && l < x)
				{
					putchar(a);
					putchar(l);
					putchar(x);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
