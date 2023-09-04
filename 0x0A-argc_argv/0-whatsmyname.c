#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: array ofarguments
 * @argc: interger to count arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	for (; argc <= 1; argc++)
	printf("%s\n", argv[0]);
	return (0);
}
