#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char sl;

	sl = 'a';
	while
		(sl <= 'z') {
			if ((sl != 'q' && sl != 'e') && sl <= 'z')
				putchar(sl);
			sl++;
		}
	putchar('\n');
	return (0);
}
