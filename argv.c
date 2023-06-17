#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Commands - Function that handles commands
 * @ac - Handles lines with arguments
 * @av - Da array of argument strings.
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int index = 0;
	char *msg = "Alx is tough";

	printf("message: %s\n", msg);

	printf("Number of arguments with ac: %d\n", ac);
	while (av[index])
	{
		printf("av[%d}, %s\n", index, av[index]);
		++index;
	}

	return (0);
}
