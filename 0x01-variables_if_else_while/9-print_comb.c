#include <stdio.h>

/**
 *main- Prints all combination of single numbers
 *
 *Return: Always 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}


