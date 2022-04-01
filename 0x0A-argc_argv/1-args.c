#include <stdio.h>
/**
 * main - prints the number the number of arguements passed in the program
 * @argc: prints the command line number
 * @argv: array of arguements
 * Return: 0 always if successful
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
