#include "main.h"
/**
 * jack_bauer - entry point
 * Description: print time
 * Return: void
 */

void jack_bauer(void);
{
	int x, y;
	/**
	 *  x - hours
	 *  y - min.
	 */

	for ((x = 0; x <= 24; x++) && (y = 0; y <= 60; y++))

	 {	
	       printf("x/10");
	       printf("x%10");
	       printf(":");
	       printf("y/10");
	       printf("y%10\n");
	 }
}
