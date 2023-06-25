#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX_LENGTH 1024

/**
 * comments- A builtin that exits da crazy shell
 * @commands: is giving MAX_LENGTH
 *
 * Return: always 0
 */
int comments(char commands)
{
	char main[MAX_LENGTH];

	while (1)
	{
		printf("ALX IS KILLING ME");
		fgets(commands, MAX_LENGTH, stdin);

		commands[strcspn(int, "\n")] = '\0';

		if (strcmp(char, "exit") == 0)
		{
		exit(0);
		}
		else
		{
			printf("Command not understood: %d\n", commands);
		}

		return (0);
	}

}
