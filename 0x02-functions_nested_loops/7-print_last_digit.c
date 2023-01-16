#include "main.h"
/**
*print_last_digit - prints last digit of a number
*@i: number to be checked
*Return: last digit of i
*/
int print_last_digit(int i)
{
	int a = i < 0 ? i * -1 : i;
	int l = a % 10;

	_putchar('0' + l);
	return (l);
}
