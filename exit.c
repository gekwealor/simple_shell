#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX_LENGTH 1024

/**
 * main - A builtin that exits da crazy shell
 * command - Just exit
 * MAX_LENGTH - No damn arguments to be freaking handled.  
 * You don’t have to handle any argument to the built-in exit
 *
 * Return -  0
 */

void (char command, char **MAX_LENGTH)
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
	}

	return (0);
}
