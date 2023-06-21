#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX_LENGTH 1024

/**
 * main - A builtin that exits da crazy shell
 * command - is giving MAX_LENGTH
 * MAX_LENGTH - No damn arguments to be freaking handled.
 * You don’t have to handle any argument to the built-in exit
 * Return - always 0
 */
int main(char command[MAX_LENGTH])
{
	char command[MAX_LENGTH];

	while (1)
	{
		printf("ALX IS KILLING ME");
		fgets(command, MAX_LENGTH, stdin);

		command[strcspn(command, "\n")] = '\0';

		if (strcmp(command, "exit") == 0)
		{
		exit(0);
		}
		else
		{
			printf("Command not understood: %s\n", command);
		}

		return (0);
	}
}
