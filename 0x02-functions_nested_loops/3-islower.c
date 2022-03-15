#include "main.h"
/**
 * main - entry point
 * Description: check for lowerCase @c
 * @c: the character to check
 * Return: 1 if lowerCase and if otherwise
 */

int _islower(int c);
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
