#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - a program that prints "$ ",
 * \ wait for the user to enter a command,
 * \ prints it on the next line.
 *
 * @ac: number of arguments.
 * @av: array of strings.
 *
 * Return: 0 always success.
 */
int main(int ac, char *argv[])
{
	char *buffer = malloc(sizeof(char) * 1024);
	size_t n = 1024;

	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("%s", buffer);
	free(buffer);
	return (0);
}
