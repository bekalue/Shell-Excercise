#include <stdio.h>
#include <unistd.h>
/**
 * main - prints process id.
 * @ac: number of arguments.
 * @av: a string of arguments.
 *
 * Return: 0 always succes.
 */

int main(int ac, char *av[])
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	my_pid = getppid();
	printf("%u\n", my_pid);
	return (0);
}
