#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar -  function entry point
 * @c:chracter to be inserted
 * Return: answer
 */

char _putchar(char c)
{
	return(write(1, &c, 1));
}
