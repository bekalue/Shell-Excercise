#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char **environ;

char *_getenv(const char *name)
{
	char *result;
	int i, j, len;
	int n = strlen(name);

	for (i = 0; environ[i]; i++)
	{
		j = 0;
		while (j < n)
		{
			if (name[j] = environ[i][j])
				len++;
			else
				break;
		}
	}
