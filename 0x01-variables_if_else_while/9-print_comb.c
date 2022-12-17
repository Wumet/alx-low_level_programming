#include <stdio.h>
/**
*main - prints digits 0 to 9
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
{
		putchar(',');
		putchar(' ');
}
	putchar('\n');
	return (0);
}
