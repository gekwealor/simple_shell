#include "shell.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#define MAX_LENGTH 200

/**
 * main - Da real function that handles command
 * cmd - executed the command
 * args - separator to be handled
 * MAX_LENGTH - an array of strings to be reported
 * status - result of the separator function
 * Return - 0
 */
int main(char cmd, char *args)
{
	int status;
	char cmd[MAX_LENGTH];
	char *args[MAX_LENGTH];

	while (1)
	{
		printf("Chill ALX");
		fgets(cmd, MAX_LENGTH, stdin);
		cmd[strcspn(cmd, "\n")] = '\0';

		char *token = strtok(cmd, " ");
		int g = 0;

		while (token != NULL)
		{
			args[g++] = token;
			token = strtok(NULL, " ");
		}
		args[g] = NULL;
		pid_t pid = fork();

		if (pid == 0)
		{
			execvp(args[0], args);
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
