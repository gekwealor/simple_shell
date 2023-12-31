#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * read_line - Function that uses getline to read input
 * Return: line read
 */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (isatty(STDIN_FILENO) == 1)
	{
		write(STDOUT_FILENO, "$ ", 2);
	}

	if (getline(&line, &bufsize, stdin) == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
