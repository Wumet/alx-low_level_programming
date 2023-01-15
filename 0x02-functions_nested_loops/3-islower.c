#include "main.h"
/**
*_islower - checks for lower case
*@c: character to be checked
*Return: 1 0r 0
*/
int _islower(int c)
{
	if (c >= 'a' && !(c > 'z'))
	{
		return (1);
	}
	return (0);
}
