#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
[02/21, 9:38 pm] Bhuti Siya❤️🥀🌻: STEP 3
[02/21, 9:38 pm] Bhuti Siya❤️🥀🌻: 1-alphabet.c
[02/21, 9:39 pm] Bhuti Siya❤️🥀🌻: #include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
