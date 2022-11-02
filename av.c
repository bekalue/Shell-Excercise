#include<stdio.h>
#include <unistd.h>
/**
 * main - prints all the arguments, without using ac
 * @ac: number of arguments.
 * @av: array of string arguments.
 *
 * Return: 0 always success.
 */
int main(int ac, char *av[])
{
	int i;

	while(av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
