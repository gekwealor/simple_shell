#include "shell.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#define MAX_LENGTH 200

/**
 * main - Da real function that handles command
 * @cmdz: executed the command
 * @argz:  separator to be handled
 *
 * Return:  0
 */
int main(char cmdz, char argz)
{
	int status;
	char cmdz[MAX_LENGTH];
	char argz[MAX_LENGTH];

	while (1)
	{
		printf("Chill ALX");
		fgets(cmdz, MAX_LENGTH, stdin);
		cmdz[strcspn(cmdz, "\n")] = '\0';

		char *token = strtok(cmdz, " ");
		int g = 0;

		while (token != NULL)
		{
			argz[g++] == token;
			token = strtok(NULL, " ");
		}
		argz[g] = NULL;
		pid_t pid = fork();

		if (pid == 0)
		{
			execvp(argz[0], argz);
			perror("eexecvp");
			exit(EXIT_FAILURE);
		}
		else if (pid < 0)
		{
			perror("fork");
		}
		else
		{
			waitpid(pid, &status, 0);
		}
	}

	return (0);
}
