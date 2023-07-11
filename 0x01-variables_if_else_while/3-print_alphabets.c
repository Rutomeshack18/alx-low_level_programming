#include <stdio.h>

/**
 *main- Prints lowercase and uppercase alphabets
 *
 *Return: Always o
 */
int main(void)
{
	char ch = 'a';
	char cht = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cht <= 'Z')
	{
		putchar(cht);
		cht++;
	}

	putchar('\n');

	return (0);
}

