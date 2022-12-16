#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (success)
*/

int main(void)
{
	char lc;
	char uc;

	for (lc = 0; lc <= 9; lc++)
		putchar(lc + '0');
	for (uc = 'a'; uc <= 'f'; uc++)
		putchar(uc);
	putchar('\n');
	return (0);
}
