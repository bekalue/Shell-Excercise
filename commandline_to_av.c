#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - a function that splits a string
 * @ac: number of arguments.
 * @av: an array of strings.
 *
 * Return: returns an array of each word of the string.
 */
int main(int ac, char *av[])
{
	char *token;
	char *delim = " ";
	char *buffer = malloc(sizeof(char) * 1024);
	size_t n = 1024;

	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("\nprinting the command:\t");
	printf("%s\n", buffer);

	token = strtok(buffer, delim);
	printf("printing the splited strings\n");

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	free(buffer);
	return (0);
}
