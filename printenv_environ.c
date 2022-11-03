#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;
/**
 * main - a program that prints the environment
 * \ using the global variable environ.
 *
 * Return: 0 success.
 */
int main(void)
{
	int i;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
