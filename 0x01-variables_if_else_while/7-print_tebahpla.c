#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse
 * followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower > 'a'; lower--)
		putchar(lower);

	putchar('\n');

	return (0);
}
