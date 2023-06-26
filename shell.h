#ifndef _SHELL_H_
#define _SHELL_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <string.h>
#include "shell.h"

char **tokenise(char *line);
char *getenv(const char *getenv);
void loop(void);
char *read_line(void);
int main(char cmdz, char argz);
int comments(char commands);
int update_env(char cwd, char *arg);
int _getenv(char prints, char *argc, char *argv);
#endif
