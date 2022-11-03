#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid;
	pid_t my_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (-1);
	}
	my_pid = getpid();
	printf("my pid is %u\n", my_pid);
	if (child_pid == 0)
		printf("(%u) im the child\n", my_pid);
	else
		printf("(%u) im the father of my child (%u)\n", my_pid, child_pid);
	return (0);
}
