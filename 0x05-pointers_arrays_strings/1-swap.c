#include "main.h"
#include <stdio.h>

/**
*swap_int - swaps the values of two integers.
* @a: pointer 1
* @b: pointer 2
* Return: void
*/

void swap_int(int *a, int *b);
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int type pointer
 * @b: int type pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
