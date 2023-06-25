#include "shell.h"
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1024

/**
 * update_env- changes da directory of da process
 * @cwd: command da syntax
 * @arg: if no command is given to the cd
 * the command has to be interpreted.
 * Return: 1
 */
int update_env(char cwd, char *arg)
{
	char *cwd = getcwd
		if (cwd != NULL)
		{
			setenv(cwd, "PWD", 1);
			free(cwd);
		}
}
/**
 * info - initializes the input
 * @input: shows the outcome
 * @input_size: gives the final size of input
 * Return: 0
 */
int info(char input, char *input_size)
{
	char input = NULL;
	size_t input_size = 0;

	while (1)
	{
		printf("BUFF_SIZE");
		getline(stdin, &input_size, &input);

		input[strcspn(input, "\n")] = '\0';

		if (strcmp(input, "exit" == 0);
			break;

		char *command = strtok(input, " ");
		char *argu = strtok(" ", NULL);

		if (strcmp(command, "cd") == 0)

			char *path = argu;

			if (path == NULL || STRCMP(path, " ") == 0)

				path = getenv("HOME");

		if (strcmp(path, "_") == 0)
			path = getenv("OLDPWD");

			printf("%s\n", path);

	}
		if (chdir(path) == 0)
		{
			update_env();
			continue;
		}
		else
		{
			perror("cd");
		}

		}

		if (getcwd(cwd, sizeof(cwd)) != NULL)
		{
			setenv("OLDPWD", getenv('PWD'), 1);
			setenv("PWD", cwd, 1);
		}
		else
		{
		perror("getcwd");
		}
	}

	return (1);

}
