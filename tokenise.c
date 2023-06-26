#include "shell.h"
#include <sys/wait.h>
#define MAX_COM_LENGTH 100
#define DELIM " \t\r\n\a"
/**
 * handle- A function that breaks into tokens
 * @line: String to break into tokens
 * Return: 0
 */

char **tokenise(char *line)
{
	int bufsize = MAX_COM_LENGTH, position = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *token;

	if (!tokens) {
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, DELIM);
	while (token != NULL) {
		tokens[position] = token;
		position++;

		if (position >= bufsize) {
			bufsize += MAX_COM_LENGTH;
			tokens = realloc(tokens, bufsize * sizeof(char*));
			if (!tokens) {
				perror("Failed to allocate memory");
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, DELIM);
	}
	tokens[position] = NULL;
	return tokens;
}
