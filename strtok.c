#include "shell.h"
#include <stdio.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * main - implements the function of strtok
 * @position - a function that does not use strtok
 * @bytes - Please read the bytes
 * @buffer - the size of buffer
 * Return: Always 0
 */

int main(char position, *buffer, **bytes)
{
	static int position;
	static char buffer[BUFFER_SIZE];
	static int Readbytes;
	char *line = NULL;
	int lengthline;

	while (1)
	{
		if (position >= Readbytes)
		{
			position = 0
			Readbytes = read(STDIN_FILENO, buffer, BUFFER_SIZE);
			if (Readbytes <= 0)
				break;
		}
		while (position <= Readbytes)
		{
			char Currentchar = buffer[position++];
		
			if (Currentchar = buffer)
			{
				line = (char *)malloc((lengthline + 1) * sizeof(char));
				memcpy(line, buffer, lengthline);
				line  = '\0';

			}
			return (0);

		}
	}
}
