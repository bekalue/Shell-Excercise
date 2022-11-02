#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - execve example
 *
 * Return: 0 success.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
		perror("Error:");
	printf("After execve\n");
	return (0);
}
