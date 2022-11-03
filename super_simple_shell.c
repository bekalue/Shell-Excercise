#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>

int main(void)
{
	pid_t child_pid;
	int status;
	size_t n = 1024;
	char *argv[] = {NULL, NULL};
	char *buf = malloc(sizeof(char) * n);
	if(!buf)
		return (-1);

	while (1)
	{
		printf(":) ");
		getline(&buf, &n, stdin);
		argv[0] = buf;

		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error:");
			return (-1);
		}
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		else
			wait(&status);
	}
	free(buf);
	return (0);
}
