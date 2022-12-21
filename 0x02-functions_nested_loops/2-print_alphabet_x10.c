#include "main.h"

/**
 * prints_alphabets_x10 - prints ALphabets 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int ten;
char lca;

for (ten = 0; ten <= 9; ten++)
{
	for (lca = 'a'; lca <= 'z'; lca++)
		_putchar(lca);
	_putchar('\n');
}

}
