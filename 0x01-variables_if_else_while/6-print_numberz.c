#include <stdio.h>

/**
 *main - prints prints all single digit numbers of base 10 starting from 0,
 *	followed by a new line
 *	only using putchar and without type char variables
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
