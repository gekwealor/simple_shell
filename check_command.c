#include "shell.h"

/**
  * check_command - Function that checks the command
  * @args: This is the input by the user
  * Return: -1 if failure, correct builtin if successful
  */
int check_command(char **args)
{
	char *builtin_str[] = {
		"env",
		"exit",
		"cd"
	};
	int (*builtin_func[]) (char **) = {
		&hsh_env,
		&hsh_exit,
		&_cd
	};
	int i;
	int builtin_num = sizeof(builtin_str) / sizeof(char *);

	for (i = 0; i < builtin_num; i++)
	{
		if (_strcmp(args[0], builtin_str[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}
	return (execute(args));
}
