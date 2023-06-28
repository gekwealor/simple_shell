#include "shell.h"
/**
 * loop -Function that implements an infinite loop and executes other functions
 */



void loop(void)
{
	char *line;
	char **args;
	int status = 1;

	do {
		line = read_line();
		if (line == NULL)
		{
			free(line);
			break;
		}
		args = tokenise(line);
		status = check_command(args);

		free(line);
		free(args);
	} while (status);
}

