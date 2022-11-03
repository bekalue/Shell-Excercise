#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>
/**
 * main - exercise for fork + wait + execve.
 * Return: 0 success.
 */
int main(void)
{
	pid_t child_pid;
	int i = 0;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
				return (1);
			}
		}
		else
			wait(&status);
	}
	return (0);
}
