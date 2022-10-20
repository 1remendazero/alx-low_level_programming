#include "main.h"

/**
 * prints_alphabets - prits alphabets in lower cases followed by a new line
 */

void print_alphabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
