#include "main.h"
/**
*_abs - computes absolute value of an integer
*@i: number to be computed
*Return: absolute value of i
*/
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	return (i);
}
