#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar -function entry point
 * @c:character tobedisplayed
 * Return: 1 o success and -1 on error
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
