#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char **environ;
/**
 * main - prints the address of env
 * \ (the third parameter of the main function)
 * \ and environ (the global variable).
 * @ac: argument number.
 * @av: array of string pointers
 *
 * Return: 0 always success
 */
int main(int ac, char **av, char **env)
{
	printf("the address of env: %p\n", &env);
	printf("the address of environ: %p\n", &environ);
	return (0);
}
