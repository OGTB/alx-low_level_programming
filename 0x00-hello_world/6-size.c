#include <stdio.h>
/**
 * main - print char
 *
 * Return: 0 always
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: zu byte(s)\n", sizeof(long int));
	printf("Size of a longlong int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
