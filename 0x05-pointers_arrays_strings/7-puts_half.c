#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
