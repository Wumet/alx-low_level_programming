#include <stdio.h>
/**
*main - prints lower case alphabets in reverse
*Return: Always 0 (success)
*/
int main(void)
{
	char lc;

	for (lc = 'z'; lc <= 'a'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
