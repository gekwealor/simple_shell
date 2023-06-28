#include "shell.h"

/**
  * check_command - Checks if it is an builtin command
  * @args: Command to check
  * Return: Execution of the command
  */

int check_command(char **args)
{
	int i;
	int builtin_num = sizeof(builtin_str) / sizeof(char *);

	for (i = 0; i < builtin_num; i++) {
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return ((*get_builtin_func[i])(args));
		}
	}
	return (execute(args));
}
