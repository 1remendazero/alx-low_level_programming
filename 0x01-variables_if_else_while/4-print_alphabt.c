#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - returns alphabets b0th except e and q
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
