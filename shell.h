#ifndef _SHELL_H_
#define _SHELL_H_
#include <stddef.h>
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
int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *s);
char *_strtok(char *str, const char *delim);
extern char **environ;
int execute(char **args);
#endif
