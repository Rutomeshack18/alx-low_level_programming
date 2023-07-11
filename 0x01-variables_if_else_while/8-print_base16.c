#include <stdio.h>

/**
 *main- Prints all the base 16 numbers
 *
 *Return: Always 0
 */

int main(void)
{
	char ch = 48;
	char cht = 'a';

	while (ch < 58)
	{
		putchar(ch);
		ch++;
	}

	while (cht < 'g')
	{
		putchar(cht);
		cht++;
	}

	putchar('\n');

	return (0);
}


