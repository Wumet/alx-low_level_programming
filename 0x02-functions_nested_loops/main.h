#ifndef _main_h_
#define _main_h_
/**
*_putchar - writes the character c to std
*@c: character to be outputed
*Return: 1 0r 0
*/
int _putchar(char c);
/**
*print_alphabet - prints alphabet
*
*/
void print_alphabet(void);
/**
*print_alphabet_x10 - prints alphabet 10 times
*/
void print_alphabet_x10(void);
/**
* _islower - checks for lower case
*@c: character to be checked
*Return: 1 or 0
*/
int _islower(int c);
/**
*_isalpha - checks for alphabetic character
*@c: character to be checked
*Return: 1 or 0
*/int _isalpha(int c);
/**
*print_sign - prints the sign of a number 
*@n: number to be checked
*Return: 0, 1 or -1
*/
int print_sign(int n);
/**
*_abs - computes the absolute value of an integer
*@i: number to be computed
*Return: absolute value of i
*/
int _abs(int i); 
#endif
