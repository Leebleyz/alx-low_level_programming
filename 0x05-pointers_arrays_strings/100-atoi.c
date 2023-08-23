#include <stdbool.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - function to conert string to integers
 * @d:character for the function
 * Return: nothing
 * */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	bool foundNumber = false;
    
	while (s[i] == ' ')
	{
		i++;
	}
    
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
    
	while (s[i] >= '0' && s[i] <= '9')
	{
		foundNumber = true;
        
	if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
	{
		return sign == -1 ? INT_MIN : INT_MAX;
	}
        
	result = result * 10 + (s[i++] - '0');
	}
    
	if (!foundNumber)
	{
	return 0;
	}
    
	return sign * result;
}
