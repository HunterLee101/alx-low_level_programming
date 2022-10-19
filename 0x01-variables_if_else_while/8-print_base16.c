#include <stdio>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 *Return: Always 0.
 */
int main(void)
{
	int num;
	char lower;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
