#include <main.h>

/**
 * print_alphabet - in lowercase followed by new line.
 *			the alphabet a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
