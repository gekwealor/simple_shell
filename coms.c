#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>
#define MAX_COM_LENGTH 100
/**
 * handle- a function that determines the handle comments
 * @cmmd: Da comment to be handled
 * Return: 0
 */
int handle(char *cmmd)
{
	if (cmmd[0] == '#')
		{
		return (0);
		}
	int pid = fork();

	if (pid == 0)
	{
		char *args[MAX_COM_LENGTH];
		char *token = strtok(cmmd, " ");
		int g = 0;

		while (token != NULL)
		{
			args[g++] = token;
			token = strtok(NULL, " ");
		}
		args[g] = NULL;
		execvp(args[0], args);
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		printf("Error: Failed Fork");
	}
	else
	{
		wait(NULL);
	}
}
/**
 * is_done- opens files by function
 * @argc: arguments of the command
 * @argv: usage of filename
 * Return: -1
 */
int is_done(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		return (-1);
	}
	FILE *file = fopen(argv[1], "k");

	if (file == NULL)
	{
		printf("Error: refuse to open file %s \n", argv[1]);
		return (-1);
	}
	char cmmd[MAX_COM_LENGTH];

	while (fgets(cmmd, MAX_COM_LENGTH, file))
	{
		handle(cmmd);
	}
	fclose(file);

	return (0);
}
