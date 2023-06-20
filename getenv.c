#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * getenv - implement da builtin env
 * @prints - make sure it prints the current environment
 * @argc - Da number of command-line arguments.
 * @argv - An array of strings repping the command-line arguments.
 * Return: 0 as always
 */
int main(int argc, char *argv[])
{
	int pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		char *args[] = {"env", NULL};

		execvp(args[0], args);

		perror("execvp");
		exit(1);
	}
	else if (pid > 0)
	{
		waitpid(pid, &status, 0);
	}
	else
	{
		perror("fork");
		exit(1);
	}

	return (0);
}
