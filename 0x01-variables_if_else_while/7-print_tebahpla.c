#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Return: Always
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
