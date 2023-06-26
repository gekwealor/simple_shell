#include "shell.h"
/**
  * execute - Executes command in child process
  * @args: Array of characters
  * Return: 1 on success
  * prints out error to stderr if there's failure at any point
  */
int execute(char **args)
{
	pid_t mypid;
	int status, exe;
	char *command;

	if (args[0] == NULL)
	{
		return (1);
	}

	mypid = fork();
	if (mypid == -1)
	{
		perror(args[0]);
		return (1);
	}

	if (mypid == 0)
	{
		command = find_path(args[0]);
		exe = execve(command, args, environ);
		if (exe == -1)
		{
			perror(args[0]);
			return (0);
		}
	}
	else
	{
		wait(&status);
	}
	return (-1);
}
