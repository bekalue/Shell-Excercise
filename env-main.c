#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - prints environment variables
 *
 * Return: 0 alaways success
 */
int main(int __attribute__((unused))ac, char __attribute__((unused))**av, char **env)
{
	int i = 0;

	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
