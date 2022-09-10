#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: main is the entry point
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
