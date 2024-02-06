#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - Checks if a string contains only digits
 * @str: Input string
 *
 * Return: 1 if string only contains digits, 0 otherwise
 */
int is_valid_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

/**
 * print_error_exit - Prints an error message and exits with status 98
 */
void print_error_exit()
{
	fprintf(stderr, "Error\n");
	exit(98);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_exit();

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
		print_error_exit();

	unsigned int num1 = atoi(argv[1]);
	unsigned int num2 = atoi(argv[2]);
	unsigned int result = num1 * num2;

	printf("%u\n", result);

	return 0;
}
