#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * isPrime - Entry point
 * Return: True
 * largestPrimeFactor - second entry point
 * main - third entry point
 * @num: first int
 */

bool isPrime(long int num)
{
	 long int i;


	if (num <= 1)
	{
		return false;
	}
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
        	    return false;
        	}
	}
	return true;
}

long int largestPrimeFactor(long int num)
{
	long int largestFactor = -1;
	long int i;

	while (num % 2 == 0)
	{
		largestFactor = 2;
	        num = num / 2;
	}
    
	for (i = 3; i <= sqrt(num); i = i + 2)
	{
	while (num % i == 0)
		{
	            largestFactor = i;
	            num = num / i;
		}
	}
    
	if (num > 2)
	{
	        largestFactor = num;
	}
   
	return largestFactor;
}

int main()
{
	    long int num = 612852475143;
	    long int largestFactor = largestPrimeFactor(num);
    
	    printf("%ld\n", largestFactor);
    
	    return (0);
}
