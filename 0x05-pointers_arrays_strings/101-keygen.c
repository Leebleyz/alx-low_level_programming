#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char* generatePassword()
{
	int randomChar;
	char* password;
	int i;

	password = malloc(PASSWORD_LENGTH + 1);
	if (password == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
    
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
	randomChar = rand() % 62;
	if (randomChar < 26)
	{
		password[i] = 'a' + randomChar;
	}
	else if (randomChar < 52)
	{
		password[i] = 'A' + randomChar - 26;
	}
	else
	{
		password[i] = '0' + randomChar - 52;
	}
	}
    
	password[PASSWORD_LENGTH] = '\0';
	return password;
}

int main()
{
	char* password;

	srand(time(0));

	password = generatePassword();

	if (password != 0)
	printf("Tada! Congrats\n");
	else
		printf("password generation failed");

	free(password);
	return (0);
}
