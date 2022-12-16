#include <stdio.h>
/**
*main - prints lower case alphabets excluding q and e
*Return: Always 0 (success)
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc = 'z'; lc++)
{
	if (lc != 'q' && lc != 'e')

		putchar(lc);
		putchar('\n');
}
	return (0);
}
