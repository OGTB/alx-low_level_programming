#include <stdio.h>
/**
 * main - entry point
 * Description: lowerCase print
 * Return: 0
 */
void print_alphabet_x10(void);
{
	char a;
	int i;

	i = 0;

	while (i < 10)

	{
		a = 'a';

		while (a <= 'z')

		_putchar(a);
		a++;


		_putchar('\n');
		i++;
	}
}
