#include <unisted.h>
#include "main.h"

/**
 * _putchar - write the character C to stdout
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
