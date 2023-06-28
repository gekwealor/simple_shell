#include "shell.h"

/**
  * get_builtin_func - this picks out the right builtin entered by the user
  * @args: This is the input by the user
  * Return: -1 if failure, correct builtin if successful
  */
int get_builtin_func(char **args)
{
	char *inbuilt_str[] = {
		"cd",
		"env",
		"exit"
	};
	int (*inbuilt_func[]) (char **) = {
		&_cd,
		&env_hsh,
		&exit_hsh
	};
	
}

