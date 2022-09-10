#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: main is the entry point
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
