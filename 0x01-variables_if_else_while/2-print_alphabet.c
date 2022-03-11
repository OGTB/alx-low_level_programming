#include <stdio.h>
/**
 * main - entry point
 * Description: lowercase letters
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = "a" ; a <= "z", a++)
	{
		putchar(a);
	}
	putchar("\n");
	return (0);
}
