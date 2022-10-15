#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a, l, x, s;

	for (a = 48; a <= 57; a++)
	{
		for (l = 48; l <= 57; l++)
		{
			for (x = 48; x <= 57; x++)
			{
				for (s = 48; s <= 57; s++)
				{
					if (((x + s) > (a + l) && x >= a) || a < x)
					{
						putchar(a);
						putchar(l);
						putchar(' ');
						putchar(x);
						putchar(s);
						if (a + l + x + s == 227 && a == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
