#include <stdio.h>
/**
 * main - prints 0 - 9
 *
 * Return: Always
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
