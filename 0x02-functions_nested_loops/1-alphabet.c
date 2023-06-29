#include <main.h>

/**
 * print_alphabet - in lowercase followed by new line.
 *			the alphabet a - z
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
