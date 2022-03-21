#include <unstd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: the main character to print
 *Return: Always 1 (Success)
 *on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
