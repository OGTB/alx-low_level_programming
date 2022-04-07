#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int n;

	if (min > max)
		return (NULL);
	n = 0;
	for (i = min; i <= max; i++)
		n++;

	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
