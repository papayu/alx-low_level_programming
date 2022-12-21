#include "main.h"
#include <unistd.h>

/**
 * _putchar-writes the alphabet c to stdout
 *
 * Return: success 1
 */

int _putchar(char c)

	return (write(1, &c, 1));

