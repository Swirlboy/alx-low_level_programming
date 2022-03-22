#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int a;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		a = (rand() % 125) + 1;
		printf("%c", a);
		total -= a;
	}
	printf("%c", total);

	return (0);
}
